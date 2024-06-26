//
// Created by student on 06/03/2024.
//

#ifndef LABCPP_ZLAB03_H
#define LABCPP_ZLAB03_H

#include <string>

using namespace std;

class Prostokat {
protected:
    string nazwa;
    double bok1, bok2;
    bool poprawny;
    double obwod, pole;

    bool czyPoprawny(double bok1, double bok2);
    void obliczObwod();
    void obliczPole();

public:
    Prostokat(string n = "?", double a = 1, double b = 2);
    virtual ~Prostokat();
    bool czyPoprawny();
    const string& jakaNazwa();
    double podajPole();
    double podajObwod();
    bool zmienBoki(double a, double b);

    string doTekstu();

};


#endif //LABCPP_ZLAB03_H
