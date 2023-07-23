#ifndef HOUSEHOLD_H
#define HOUSEHOLD_H

//defined as pct of natl med income
enum SocialClass: int{
    UNEMPLOYED = 30,
    MIN_WAGE = 90,
    PROFESSIONAL = 200,
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

    Household(bool in_has_car, float in_income, int in_rent, bool in_has_laundry,
        SocialClass in_job, bool in_walking_distance);
    ~Household();
};


#endif /* HOUSEHOLD_H */
