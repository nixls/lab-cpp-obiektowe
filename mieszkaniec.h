//
// Created by nikig on 09.04.2024.
//

#ifndef LABCPP_MIESZKANIEC_H
#define LABCPP_MIESZKANIEC_H

#include "ustawienia.h"


class ZamiarMieszkanca {
public:
    const AkcjaMieszkanca akcja;
    const Polozenie gdzie;

    ZamiarMieszkanca(AkcjaMieszkanca _akcja = NIC, Polozenie _gdzie = NIGDZIE)
        : akcja(_akcja), gdzie(_gdzie) {}
};

class Sasiedztwo;

class Mieszkaniec
{
protected:
    char symbol;

public:
    Mieszkaniec(char _symbol = UstawieniaSymulacji::pobierzUstawienia().znakNieokreslony);

    Mieszkaniec(const Mieszkaniec& mieszkaniec);

    virtual char jakiSymbol() const final;

    virtual ~Mieszkaniec();

    virtual RodzajMieszkanca kimJestes() = 0;

    virtual ZamiarMieszkanca wybierzAkcje(Sasiedztwo sasiedztwo) = 0;

    virtual Mieszkaniec* dajPotomka() = 0;

    virtual void przyjmijZdobycz(Mieszkaniec* mieszkaniec) = 0;
};


#endif //LABCPP_MIESZKANIEC_H
