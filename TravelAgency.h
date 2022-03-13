
#ifndef TRAVELAGENCY
#define TRAVELAGENCY

#include <iostream>
#include <vector>
#include <memory>
#include "Destinations.h"
#include "Mountains.h"
#include "Islands.h"


class TravelAgency {
private:
    int mountainsDiscount;
    int islandsDiscount;
    float percentileDiscount;
    vector<Destinations *> d;
    static TravelAgency *instance;
    vector<shared_ptr<Destinations>> destinatie;
    TravelAgency() = default;
public:
    ~TravelAgency() = default;
    TravelAgency(int _mountainsDiscount, int _islandsDiscount, int _percentileDiscount, vector<shared_ptr<Destinations>> destinatie);
    TravelAgency(const TravelAgency&) = default;
    TravelAgency& operator=(const TravelAgency&) = default;
    static TravelAgency *getInstance();

    void showMeniu();
    void addDestinations();
    void printDestinations();
    void run();
};

#endif TRAVELAGENCY
