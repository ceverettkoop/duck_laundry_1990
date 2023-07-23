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

    Household(bool has_car, float income, int rent, bool has_laundry,
        SocialClass job, bool walking_distance);
    ~Household();
};


#endif /* HOUSEHOLD_H */
