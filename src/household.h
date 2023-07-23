#ifndef HOUSEHOLD_H
#define HOUSEHOLD_H

enum SocialClass{
    UNEMPLOYED,
    MIN_WAGE,
    PROFESSIONAL,
    RICH
};

class Household{
private:
    bool has_car;
    float income;
    int rent;
    bool has_laundry;
    SocialClass job;
    bool walking_distance;
    

public:
    Household(/* args */);
    ~Household();
};


#endif /* HOUSEHOLD_H */
