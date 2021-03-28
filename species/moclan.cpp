/**
 * Moclan Implementation
 *
 * Copyright (c) 2021, Myo Aung.
*/

#include "species/moclan.h"
#include "species/humanoid.h"

Moclan::Moclan() : Humanoid() {
    _egg = true;
}
Moclan::Moclan(double h, double w) : Humanoid(h, w) {
    _height = h;
    _weight = w;
    _egg = false;
}

double Moclan:: height() {
    return _height;
}
double Moclan:: weight() {
    return _weight;
}
Moclan Moclan:: layEgg() {
    Moclan temp;
    return temp;
}
void Moclan:: hatch() {
    _egg = false;
}

bool Moclan:: isEgg() {
    return _egg;
}

