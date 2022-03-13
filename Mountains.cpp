
#include "Mountains.h"
using namespace std;

Mountains::Mountains(const string &_country, const string &_city, const string &_name, int _pricePerDay, int _peakHeight,
                     int _routs, float _distance) : Destinations(_country, _city, _name, _pricePerDay) {
    this->peakHeight = _peakHeight;
    this->routs = _routs;
    this->distance = _distance;

}

void Mountains::read(istream &is) {
Destinations::read(is);
cout << "inaltimea varfului muntelui este: ";
is >> peakHeight;
cout << "numarul de rute este: ";
is >> routs;
cout << "distanta este: ";
is >> distance;
}

void Mountains::print(ostream &os) const {
Destinations::print(os);
os << " Inaltimea varfului muntelui este: " << peakHeight;
os << " numarul de rute este: " << routs;
os << " distanta este: " << distance;
}