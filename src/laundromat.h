#ifndef LAUNDROMAT_H
#define LAUNDROMAT_H

enum QualityLevel{
    SUBSTANDARD,
    FUNCTIONAL,
    EXCELLENT,
    UNNECESSARY
};

enum Amenity{
    PERIODICAL,
    WIFI,
    VENDING_MACHINES,
    ARCADE,
    DELI,
    BAR,
    BRUNCH
};

class Laundromat{
private:

    float price;
    int machine_ct;
    float wage;
    int staff_desired;
    int staff_employed;
    QualityLevel machine_quality_level;

    bool has_wifi;
    bool has_periodicals;
    bool has_vending_machines;
    bool has_arcade;
    bool has_deli;
    bool has_bar;
    bool has_brunch;

public:

    Laundromat(/* args */);
    ~Laundromat();
    
    void set_price(float in_price);
    const float get_price();
    
    bool toggle_amenity(Amenity p);
    
};


#endif /* LAUNDROMAT_H */
