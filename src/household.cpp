#include "household.h"
#include <cstdlib>


static inline bool determine_car(SocialClass soc_class){
    float odds = 0;
    switch (soc_class){
    case UNEMPLOYED:
        odds = 0.3f;
        break;
    case MIN_WAGE:
        odds = 0.5f;
    case PROFESSIONAL:
        odds = 0.9f;
        break;
    case RICH:
        odds = 0.9f;
        break;
    }
    return (std::rand() > odds);
}

//used on initial set and for movers
static inline int determine_income(SocialClass soc_class, int local_med_wage){
    float ratio = 0;
    switch (soc_class){
    case UNEMPLOYED:
        ratio = 0.3f;
        break;
    case MIN_WAGE:
        ratio = 0.5f;
    case PROFESSIONAL:
        ratio = 1.2f;
        break;
    case RICH:
        ratio = 3;
        break;
    }
    return (local_med_wage * ratio);
}

static inline int set_initial_weath(SocialClass soc_class){
    if(soc_class == UNEMPLOYED || soc_class == MIN_WAGE){
        return 0;
    }
    if(soc_class == PROFESSIONAL) return 50000;
    if(soc_class == RICH) return 500000;
}

//called on init as well as for movers
Household::Household(SocialClass soc_class, int local_med_wage){

    has_car = determine_car(soc_class);
    income = determine_income(soc_class, local_med_wage);
    wealth = set_initial_weath(soc_class);
    

}

Household::~Household() {
}
