#include "neighborhood.h"
#include <random>
#include <iostream>
#include <ctime>

static inline SocialClass find_nearest_class(const int pct){
    SocialClass ret = UNEMPLOYED;
    int dist = abs(pct - UNEMPLOYED);
    if(dist > abs(pct - MIN_WAGE)) {
        ret = MIN_WAGE;
        dist = abs(pct - MIN_WAGE);
    }
    if(dist > abs(pct - PROFESSIONAL)) {
        ret = PROFESSIONAL;
        dist = abs(pct - PROFESSIONAL);
    }
    if(dist > abs(pct - RICH)) {
        ret = RICH;
        dist = abs(pct - RICH);
    }
    return ret;
}

//set initial state of neighborhood at start of game
void Neighborhood::init() {

    const int total_households = 100;
    const int min_wage_hhs = 60;
    const int init_med_wage = 29943;
    std::default_random_engine generator;
    std::normal_distribution<int> distribution(100, 3);
    std::vector<SocialClass> household_classes;

    generator.seed(std::time(0));

    //seed rents


    //seed households
    for (int i = 0; i < min_wage_hhs; i++){
        household_classes.push_back(MIN_WAGE);
    }
    for (int i = 0; i < (total_households - min_wage_hhs); i++){
        household_classes.push_back(
            find_nearest_class(distribution(generator)));
    }
    for (auto &soc_class : household_classes){
        households.push_back(Household(soc_class, init_med_wage));
    }
    

}

Dwelling::Dwelling(int local_med_rent, SocialClass soc_class) {
    static int next_index = 0;
    index = next_index;
    next_index++;


}
