#include <iostream>
#include <initializer_list>
#include "equilateral.h"

Equilateral::Equilateral(double a) : Isosceles(a, a, 60, 60) {
    set_name("Равносторонний треугольник");
}
