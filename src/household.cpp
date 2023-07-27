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
        ratio = 0.9f;
        break;
    case RICH:
        ratio = 0.9f;
        break;
    }
    return (std::rand() > ratio);
}

//called on init as well as for movers
Household(SocialClass soc_class, int local_med_wage){

}

Household::~Household() {
}
