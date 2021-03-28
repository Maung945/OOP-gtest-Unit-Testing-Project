/**
 * Humanoid implementation
 *
 * Copyright (c) 2021, Myo Aung.
*/
#include "species/humanoid.h"

Humanoid::Humanoid() {
    _height = 0;
    _weight = 0;
}

Humanoid::Humanoid(double h, double w) {
    _height = h;
    _weight = w;
}

double Humanoid::height() {
    return _height;
}

double Humanoid::weight() {
    return _weight;
}
