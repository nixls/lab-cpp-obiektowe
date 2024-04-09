//
// Created by nikig on 09.04.2024.
//

#ifndef LABCPP_ZLAB06_H
#define LABCPP_ZLAB06_H

#include "zlab03.h"
#include <iostream>

class Obliczenia {
protected:
    const double pi = 3.14;
public:
    virtual double promienKolaWgPola() = 0;
    virtual double promienOkreguWgObwodu() = 0;
    virtual ~Obliczenia();
};

class Kwadrat : public Prostokat, public Obliczenia {
public:
    Kwadrat(string nazwa = "?", double bok = 0)
        : Prostokat(nazwa, bok, bok) {}

    double promienKolaWgPola() override;
    double promienOkreguWgObwodu() override;

    virtual ~Kwadrat()
    {
        cout << "Kwadrat: " << nazwa << " kończy działanie" << endl;
    }

    string doTekstu();
};


#endif //LABCPP_ZLAB06_H
