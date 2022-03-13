
#ifndef DESTINATIONS
#define DESTINATIONS

#include <iostream>
#include <string>
using namespace std;


class Destinations {
protected:
    string country;
    string city;
    string name;
    int pricePerDay;

public:
    Destinations() = default;
    virtual ~Destinations() = default;

    Destinations(const string &_country, const string &_city, const string &_name, int _pricePerDay);
    Destinations(const Destinations&) = default;
    Destinations &operator=(const Destinations&) = default;

    friend istream &operator>>(istream &is, Destinations &d);
    friend ostream &operator<<(ostream &os, const Destinations &d);

    virtual void read(istream& is);
    virtual void print(ostream& os) const;


    virtual double castig() {
        return 0;
    }
};


#endif DESTINATIONS
