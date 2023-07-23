#ifndef NATIONALECONOMY_H
#define NATIONALECONOMY_H

#include "constants.h"

//these change irrespective of local economy based on historical values
class NationalEconomy{
private:
    float fed_rate = FED_RATES[0];
    float unemployment_pct = UNEMPLOYMENT_RATES[0];
    int med_income =  MEDIAN_INCOME[0];
    int base_rent = BASE_RENT[0];

public:
    NationalEconomy(/* args */);
    ~NationalEconomy();
    void process_turn(const int cur_turn);
};


#endif /* NATIONALECONOMY_H */
