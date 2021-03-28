/**
 * Gelatin declaration
 *
 * Copyright (c) 2021, Myo Aung.
*/

#ifndef SPECIES_GELATIN_H_
#define SPECIES_GELATIN_H_

class Gelatin {
 private:
  double _weight;
  char *_shape;
  int _id;

 public:
  Gelatin();
  explicit Gelatin(double);
  double weight();
  char* shape();
  void morph();
  void morph(const char *s);
  Gelatin split();
  friend bool operator != (const Gelatin &n, const Gelatin &o);
};

#endif  // SPECIES_GELATIN_H_
