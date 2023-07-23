#ifndef NEIGHBORHOOD_H
#define NEIGHBORHOOD_H

#include <vector>
#include "household.h"
#include "nationaleconomy.h"

class Neighborhood{
private:
    float local_min_wage;
    std::vector<Household> households;
    struct Statistics{ //calculated based on households and stored here for reporting
        int walk_homes;
        int drive_homes;
        int drive_homes_wo_car;
        int public_parking;
        int local_med_income;
        int local_avg_rent;
    };

    //called by process turn:
    void migrate_households(const NationalEconomy& nation, const Laundromat& laundromat);
    void update_income(const NationalEconomy& nation); //updates income and rents
    void update_households(); //social mobility and changes based on wealth
    void update_stats(); //reflect changed neighborhood
    
public:
    Neighborhood();
    ~Neighborhood();
    void process_turn(const NationalEconomy& nation);
    void get_stats();
};


#endif /* NEIGHBORHOOD_H */
