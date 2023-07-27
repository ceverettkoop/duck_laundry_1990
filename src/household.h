#ifndef HOUSEHOLD_H
#define HOUSEHOLD_H

//defined as pct of natl med income
enum SocialClass: int{
    UNEMPLOYED = 30,
    MIN_WAGE = 70,
    PROFESSIONAL = 150,
    RICH = 300
};

struct Household{
    bool has_car;
    float income;
    int wealth;
    int rent;
    bool has_laundry;
    SocialClass job;
    bool walking_distance;


    Household(SocialClass soc_class, int local_med_wage);
    ~Household();

};


#endif /* HOUSEHOLD_H */
