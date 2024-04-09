//
// Created by nikig on 09.04.2024.
//

#include "zlab06.h"
#include <cmath>

Obliczenia::~Obliczenia() {

}

double Kwadrat::promienKolaWgPola()
{
    return sqrt(pole / pi);
}

double Kwadrat::promienOkreguWgObwodu()
{
    return obwod / (2*pi);
}


string Kwadrat::doTekstu() {
    string napis = "";
    napis = "Kwadrat o nazwie: " + nazwa
    + " bok=" + to_string(bok1);
    if(poprawny) napis += " obwod=" + to_string(obwod)
    + " pole=" + to_string(pole);
    else napis +=" !Figura niepoprawna.";
    return napis;
}
