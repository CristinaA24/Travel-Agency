
#ifndef ISLANDS
#define ISLANDS

#include "Destinations.h"
#include <string>
using namespace std;



class Islands : public Destinations {
private:
    int numberIslands;
public:
    Islands() = default;
    ~Islands() override = default;

    Islands(const string &_country, const string &_city, const string &_name, int _pricePerDay, int _numberIslands);
    Islands(const Islands&) = default;
    Islands &operator=(const Islands&) = default;

    void read(istream &is) override;

    void print(ostream &os) const override;

};


#endif ISLANDS
