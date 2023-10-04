#include <iostream>
#include <initializer_list>
#include "isosceles.h"

Isosceles::Isosceles(double a, double b, double A, double B)
      : Triangle(a, b, a, A, B, A) {
    set_name("Равнобедренный треугольник");
}
