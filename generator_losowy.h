//
// Created by student on 13/03/2024.
//

#ifndef LABCPP_GENERATOR_LOSOWY_H
#define LABCPP_GENERATOR_LOSOWY_H

#include <random>

class GeneratorLosowy {
private:
    static std::random_device device;
    GeneratorLosowy();
public:
    static unsigned short losujPomiedzy(unsigned short min, unsigned short max);

    static long losujPomiedzy(long min, long max);

    static int losujOdZeraDo(int max);
};

typedef GeneratorLosowy GEN;


#endif //LABCPP_GENERATOR_LOSOWY_H
