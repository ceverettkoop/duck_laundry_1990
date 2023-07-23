#ifndef NATIONALECONOMY_H
#define NATIONALECONOMY_H

//staticly tracks historical data
class NationalEconomy{
private:
    float fed_rate;
    float unemployment_pct;
    float fed_min_wage;

public:
    NationalEconomy(/* args */);
    ~NationalEconomy();
};


#endif /* NATIONALECONOMY_H */
