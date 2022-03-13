
#ifndef MOUNTAINS
#define MOUNTAINS

#include "Destinations.h"
#include <string>
using namespace std;

class Mountains : public Destinations {
private:
    int peakHeight;
    int routs;
    float distance;
public:
    Mountains() = default;
    ~Mountains() override = default;

    Mountains(const string &_country, const string &_city, const string &_name, int _pricePerDay, int _peakHeight,
              int _routs, float _distance);
    Mountains(const Mountains&) = default;
    Mountains &operator=(const Mountains&) = default;


    void read(istream &is) override;

    void print(ostream &os) const override;
};


#endif MOUNTAINS
