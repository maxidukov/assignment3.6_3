#include <iostream>
#include <initializer_list>
#include "triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
      : Base({a, b, c, A, B, C}) {
    set_name("Треугольник");
}
