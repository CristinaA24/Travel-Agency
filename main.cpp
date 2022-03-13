#include <iostream>
#include <string>
#include <vector>
#include "Destinations.h"
#include "Mountains.h"
#include "Islands.h"
#include "TravelAgency.h"
#include <memory>
using namespace std;


int main() {

    TravelAgency *app = TravelAgency::getInstance();
    app->run();
    return 0;
}

