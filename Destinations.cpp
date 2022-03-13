
#include "Destinations.h"
using namespace std;

Destinations::Destinations(const string &_country, const string &_city, const string &_name, int _pricePerDay) {
    this->country = _country;
    this->city = _city;
    this->name = _name;
    this->pricePerDay = _pricePerDay;
}


istream &operator>>(istream &is, Destinations &d) {
    d.read(is);
    return is;
}

ostream &operator<<(ostream &os, const Destinations &d) {
    d.print(os);
    return os;
}

void Destinations::read(istream &is) {
    cout << "tara: ";
    getline(is, country);
    cout << ", oras: ";
    getline(is, city);
    cout << ", nume locatie: ";
    getline(is, name);
    cout << ", pret pe zi: ";
    is >> pricePerDay;
}

void Destinations::print(ostream &os) const {
    os << "tara: " << country;
    os << ", oras: " << city;
    os << ", numele locatiei: " << name;
    os << ", pretul pe zi: " << pricePerDay;

}


