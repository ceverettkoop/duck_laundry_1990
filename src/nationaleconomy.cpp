#include "nationaleconomy.h"
#include "constants.h"


void NationalEconomy::process_turn(const int cur_turn) {
    fed_rate = FED_RATES[cur_turn];
    unemployment_pct = UNEMPLOYMENT_RATES[cur_turn];
    med_income = MEDIAN_INCOME[cur_turn];
    base_rent = BASE_RENT[cur_turn];

}   