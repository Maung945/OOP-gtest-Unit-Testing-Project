/**
 * Human implementation
 *
 * Copyright (c) 2021, Myo Aung.
*/

#include "species/human.h"
#include "species/humanoid.h"

Human::Human(bool m, double h, double w) : Humanoid(h, w) {
    _gender = m;
}

bool Human::isMale() {
    return _gender;
}
