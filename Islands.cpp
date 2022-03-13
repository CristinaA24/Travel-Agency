
#include "Islands.h"
using namespace std;

Islands::Islands(const string &_country, const string &_city, const string &_name, int _pricePerDay, int _numberIslands) : Destinations(_country, _city, _name, _pricePerDay) {
    this->numberIslands = _numberIslands;
}

void Islands::read(istream &is) {
Destinations::read(is);
cout << "numar de insule: ";
is >> numberIslands;
}

void Islands::print(ostream &os) const {
Destinations::print(os);
os << "numar de insule: " << numberIslands << "\n";
}

