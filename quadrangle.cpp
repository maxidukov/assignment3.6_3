#include <iostream>
#include <initializer_list>
#include "quadrangle.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B,
             double C, double D)
      : Base({a, b, c, d, A, B, C, D}) {
    set_name("Четырёхугольник");
}
