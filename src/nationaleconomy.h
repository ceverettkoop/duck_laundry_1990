#ifndef NATIONALECONOMY_H
#define NATIONALECONOMY_H

//these change irrespective of local economy and determine
//local rates
class NationalEconomy{
private:
    float fed_rate;
    float unemployment_pct;
    float fed_min_wage;
    int med_income;
    int base_rent; 

public:
    NationalEconomy(/* args */);
    ~NationalEconomy();
};


#endif /* NATIONALECONOMY_H */
