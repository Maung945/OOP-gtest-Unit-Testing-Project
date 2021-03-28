/**
 * Humanoid declaration
 *
 * Copyright (c) 2021, Myo Aung.
*/

#ifndef SPECIES_HUMANOID_H_
#define SPECIES_HUMANOID_H_

class Humanoid {
 private:
  double _height, _weight;

 public:
  Humanoid();
  Humanoid(double, double);
  double height();
  double weight();
};

#endif  // SPECIES_HUMANOID_H_

