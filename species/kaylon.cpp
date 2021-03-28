/**
 * Kaylon Implementation
 *
 * Copyright (c) 2021, Myo Aung.
*/

#include "species/kaylon.h"
#include "species/humanoid.h"

Kaylon::Kaylon(double h, double w) : Humanoid(h, w) {
    _height = h;
    _weight = w;
}

double Kaylon::height() {
    return _height;
}
double Kaylon::weight() {
    return _weight;
}
bool Kaylon::isFiring() {
    return _firing;
}
void Kaylon::startFiring() {
    _firing = true;
}
void Kaylon::stopFiring() {
    _firing = false;
}
