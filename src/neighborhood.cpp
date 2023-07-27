#include "neighborhood.h"
#include <random>
#include <iostream>

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

    //create 100 households
    //60 set to MIN_WAGE
    //random assignment of other 40 with normal distribution around 100
    const int init_med_wage = 29943;
    std::default_random_engine generator;
    std::normal_distribution<int> distribution(100, 3);
    std::vector<SocialClass> household_classes;
    for (int i = 0; i < 60; i++){
        household_classes.push_back(MIN_WAGE);
    }
    for (int i = 0; i = 40; i++){
        household_classes.push_back(
            find_nearest_class(distribution(generator)));
    }
    for (auto &soc_class : household_classes){
        households.push_back(Household(soc_class, init_med_wage));
    }
    

}