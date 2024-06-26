#include <iostream>
#include "zlab02.h"
#include "zlab03.h"
#include "organizm.h"
#include "ustawienia.h"
#include "generator_losowy.h"
#include "sasiedztwo.h"
#include "zlab06.h"

using namespace std;

void drukujOrganizm(const Organizm &o) {
    cout << "licznikZycia: " << o.stanLicznikaZycia() << " licznikPosilkow: " << o.stanLicznikaPosilkow() << endl
         << "limitPosilkow: " << o.limitPosilkow << " kosztPotomka: " << o.kosztPotomka << endl << "głodny: "
         << o.glodny() << " pączkujący: " << o.paczkujacy() << endl << endl;
}

void wyswietl(UstawieniaSymulacji &ust) {
    std::cout << "Znak glon:" << ust.znakGlon << " zycieMin=" << ust.glonZycieMin << " zycieMax=" << ust.glonZycieMax
              << std::endl;
}

string nazwaRodzaju(RodzajMieszkanca rodzaj) {
    switch (rodzaj) {
        case GLON: return "GLON";
        case GRZYB: return "GRZYB";
        case BAKTERIA: return "BAKTERIA";
        case PUSTKA: return "PUSTKA";
        case SCIANA: return "SCIANA";
        case TRUP: return "TRUP";
        case NIEZNANE: return "NIEZNANE";
    }
}

int main() {
    Kwadrat kwadrat("Kwadrek",4);

    Kwadrat & refDoKwadrat = kwadrat;

    double r0 = refDoKwadrat.promienKolaWgPola();
    double r1 = refDoKwadrat.promienOkreguWgObwodu();

     cout << "ro=" << r0 << endl
     << "r1=" << r1 << endl;


//    Sasiedztwo sasiedztwo;
//    sasiedztwo.okreslSasiada(P, GLON);
//    sasiedztwo.okreslSasiada(PG, GRZYB);
//    sasiedztwo.okreslSasiada(G, GRZYB);
//    sasiedztwo.okreslSasiada(LG,GLON);
//    sasiedztwo.okreslSasiada(L,BAKTERIA);
//    sasiedztwo.okreslSasiada(LD,BAKTERIA);
//    sasiedztwo.okreslSasiada(D,GLON);
//    sasiedztwo.okreslSasiada(PD,PUSTKA);
//
//    cout << "Przeglad sasiedztwa:" << endl;
//
//    for (int i = 0; i < 8; i++) {
//        Polozenie p = static_cast<Polozenie>(i);
//        RodzajMieszkanca r = sasiedztwo.ktoJestSasiadem(p);
//
//        cout << "polozenie=" << p << " rodzaj=" << nazwaRodzaju(r) << endl;
//    }
//
//    cout << endl << "Policzenie sasiadow okreslonego rodzaju:" << endl;
//    cout << " glony = " << sasiedztwo.ile(GLON) << endl;
//    cout << " grzyby = " << sasiedztwo.ile(GRZYB) << endl;
//    cout << " trupy = " << sasiedztwo.ile(TRUP) << endl;
//
//    cout << endl << "Wylosowanie sasiada:" << endl;
//    cout << " glon -> " << sasiedztwo.losujSasiada(GLON) << endl;
//    cout << " pustka ->" << sasiedztwo.losujSasiada(PUSTKA) << endl;
//    cout << " trup -> " << sasiedztwo.losujSasiada(TRUP) << endl;
//
//    long wiersz, kolumna;
//    cout << endl << "Zmiana indeksow [5][7]" << "wg polozenia:" << endl;
//
//    for (int i = 0; i < 8; i++) {
//        Polozenie p = static_cast<Polozenie>(i);
//        wiersz = 5; kolumna = 7;
//        Sasiedztwo::zmienIndeksyWgPolozenia(p, wiersz, kolumna);
//
//        cout << " polozenie: " << p << " ->[" << wiersz << "][" << kolumna << "]" << endl;
//    }
//    cout << endl;

//    cout << "Liczby losowe typu int:" << endl;
//    cout << " od 0 do 5: ";
//    for (int i = 0; i < 10; i++)
//        cout << GEN::losujOdZeraDo(5) << " ";
//    cout << endl << " od 0 do 3: ";
//    for (int i = 0; i < 10; i++)
//        cout << GEN::losujOdZeraDo(3) << " ";
//    cout << endl << " od 0 do 20: ";
//    for (int i = 0; i < 10; i++)
//        cout << GEN::losujOdZeraDo(20) << " ";
//
//    cout << endl << endl;
//
//    cout << "Liczby losowe typu long: " << endl;
//    cout << " od -2 do 2:";
//    for (int i = 0; i < 10; i++)
//        cout << GEN::losujPomiedzy(-2L, 2L) << " ";
//
//    cout << endl << endl << "Liczby losowe typu unsigned short: " << endl;
//    cout << " od 2 do 6: ";
//    unsigned short min = 2, max = 6;
//
//    for (int i = 0; i < 10; i++)
//        cout << GEN::losujPomiedzy(max, min) << " ";
//
//    cout << endl << endl;
//    //1. Dostep do obiektu klasy UstawieniaSymulacji
//    UstawieniaSymulacji &ust1 = UstawieniaSymulacji::pobierzUstawienia();
//    auto &ust2 = UstawieniaSymulacji::pobierzUstawienia();
//    auto &ust3 = UstawieniaSymulacji::pobierzUstawienia();
//
//    cout << "Pobranie ustawien 3x" << endl;
//    cout << "UST1: ";
//    wyswietl(ust1);
//    cout << "UST2:";
//    wyswietl(ust2);
//    cout << "UST3:";
//    wyswietl(ust3);
//
//    cout << endl << "Zmiana wartosci tylko 1x" << endl;
//    ust2.glonZycieMax = 100;
//    cout << "UST1: ";
//    wyswietl(ust1);
//    cout << "UST2:";
//    wyswietl(ust2);
//    cout << "UST3:";
//    wyswietl(ust3);

//    //1. Test kreacji obiektów
//    Organizm organizm1(8, 3, 2);
//    Organizm organizm2 = organizm1;
//    Organizm organizm3(organizm1);
//
//    cout << "Wynik testu kreacji obiektów:"
//            << endl << endl;
//    cout << "Organizm1:" << endl;
//    drukujOrganizm(organizm1);
//    cout << "Organizm2" << endl;
//    drukujOrganizm(organizm1);
//    cout << "Organizm3" << endl;
//    drukujOrganizm(organizm2);
//
//    //2. Test niezależności obiektów
//    organizm1.posilek();
//    organizm1.posilek();
//    organizm2.posilek();
//    organizm3.krokSymulacji();
//
//    cout << "Wynik testu niezależności obiektów:"
//            << endl << endl;
//    cout << "Organizm1:" << endl;
//    drukujOrganizm(organizm1);
//    cout << "Organizm2" << endl;
//    drukujOrganizm(organizm2);
//    cout << "Organizm3" << endl;
//    drukujOrganizm(organizm3);
//
//    //3. Test symulacji
//    Organizm organizm4(8, 3, 2);
//
//    cout << "Wynik testu symulacji:"
//            << endl << endl;
//    cout << "Stan początkowy:" << endl;
//    drukujOrganizm(organizm4);
//
//    for (int i = 1; i < 11; i++) {
//        organizm4.krokSymulacji();
//
//        if (organizm4.paczkujacy()) {
//            organizm4.potomek();
//            cout << "---> Potomek" << endl;
//        }
//        else organizm4.posilek();
//
//        cout << "Po wykonaniu kroku symulacji: "
//                << i << endl;
//        drukujOrganizm(organizm4);
//    }
//

    // cout << "Laboratorium 03" << endl;
    //
    // Prostokat p1;
    // Prostokat p2("koc", 1.4, 2.2);
    // Prostokat p3("pułapka", -2, -3);
    //
    // cout.precision(2);
    // cout << p1.doTekstu() << endl;
    // cout << p2.doTekstu() << endl;
    // cout << p3.doTekstu() << endl;
    //
    // p3.zmienBoki(2, 3);
    // cout << endl << p3.doTekstu() << endl;
    //
    // cout << endl << "Użycie metod obiektu:" << endl;
    // cout << "Nazwa: " << p2.jakaNazwa() << endl
    //      << "Poprawny: " << p2.czyPoprawny() << endl
    //      << "Obwód=:" << p2.podajObwod() << endl
    //      << "Pole=" << p2.podajPole() << endl;

    //    cout << "Laboratorium 02" << endl;
    //
    //    ZLab02 lab02;
    //    lab02.menu();

    return 0;
}
