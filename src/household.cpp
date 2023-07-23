#include "household.h"

Household(bool in_has_car, float in_income, int in_rent, bool in_has_laundry,
    SocialClass in_job, bool in_walking_distance) :
    has_car(in_has_car), income(in_income), rent(in_rent), has_laundry(in_has_laundry),
    job(in_job), walking_distance(in_walking_distance) {

}

Household::~Household(){
}
