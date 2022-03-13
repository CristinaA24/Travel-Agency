
#include "TravelAgency.h"

TravelAgency::TravelAgency(int _mountainsDiscount, int _islandsDiscount, int _percentileDiscount,
                           const vector<shared_ptr<Destinations>> d) {
this->mountainsDiscount = _mountainsDiscount;
this->islandsDiscount = _islandsDiscount;
this->percentileDiscount = _percentileDiscount;
}

TravelAgency* TravelAgency::instance = nullptr;

TravelAgency* TravelAgency::getInstance() {
    if(instance == nullptr) {
        instance = new TravelAgency();
    }
    return instance;
}


void TravelAgency :: showMeniu() {
    cout << "\tMENIU\tALEGETI O OPTIUNE:\n";
    cout << "1. Adaugare destinatii: " << endl;
    cout << "2. Afiseaza destinatii: " << endl;
    cout << "3. Iesire\n" << endl;
}

unsigned int option{};
void TravelAgency::run(){
    bool isRunning = true;
    while(isRunning){
        cout << "Alegeti o optiune:\n";
        showMeniu();

        cout << "Option: ";
        cin >> option;

        switch (option) {
            case 1: {
                addDestinations();
                break;
            }
            case 2: {
                printDestinations();
                break;
            }
            case 3: {
                cout << "Iesire din aplicatie..\n";
                isRunning = false;
                break;
            }
            default: {
                cout << "error";
                break;
            }
        }
    }
}


void TravelAgency::addDestinations() {
    int option, c = 0;
    shared_ptr<Destinations> destinatieTemporara;
    while (c == 0) {
        cout << "Locul destinatiei (1-Munte, 2-Insula): ";
        cin >> option;
        c = 1;
            switch (option) {
                case 1: {
                    destinatieTemporara = make_shared<Mountains>();
                    break;
                }
                case 2: {
                    int option2;
                    destinatieTemporara = make_shared<Islands>();
                    break;
                }

                default:
                    cout << "error";
                    break;
            }
            destinatieTemporara->read(cin);
            destinatie.push_back(destinatieTemporara);

        }
    }



void TravelAgency::printDestinations() {
    int i = 1;
    for(auto Destinations : destinatie){
        cout << "Numarul destinatiei" << i <<"\n";
        Destinations->print(cout);
        i += 1;
        cout << "\n";}
    }






