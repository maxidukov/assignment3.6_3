#include <iostream>
#include <initializer_list>
#include "right_triangle.h"

Right_Triangle::Right_Triangle(double a, double b, double c, double A, double B)
      : Triangle(a, b, c, A, B, 90) {
    set_name("Прямоугольный треугольник");
}
