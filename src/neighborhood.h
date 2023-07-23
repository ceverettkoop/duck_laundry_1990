#ifndef NEIGHBORHOOD_H
#define NEIGHBORHOOD_H

#include <vector>
#include "household.h"

class Neighborhood{
private:
    float min_wage;
    std::vector<Household>& households;
    

public:
    Neighborhood(/* args */);
    ~Neighborhood();
};


#endif /* NEIGHBORHOOD_H */
