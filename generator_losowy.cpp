//
// Created by student on 13/03/2024.
//

#include "generator_losowy.h"

std::random_device GeneratorLosowy::device;

GeneratorLosowy::GeneratorLosowy() {}

unsigned short GeneratorLosowy::losujPomiedzy(unsigned short min, unsigned short max) {
    if (min > max) {
        unsigned short t = min;
        min = max;
        max = t;
    }

    std::uniform_int_distribution<unsigned short> dist(min, max);

    return dist(GeneratorLosowy::device);
}

long GeneratorLosowy::losujPomiedzy(long min, long max) {
    if (min > max) {
        long t = min;
        min = max;
        max = t;
    }

    std::uniform_int_distribution<long> dist(min, max);

    return dist(GeneratorLosowy::device);
}

int GeneratorLosowy::losujOdZeraDo(int max) {
    std::uniform_int_distribution<int> dist(0, max);

    return dist(GeneratorLosowy::device);
}
