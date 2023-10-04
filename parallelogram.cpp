#include <iostream>
#include <initializer_list>
#include "parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double A, double B)
      : Quadrangle(a, b, a, b, A, B, A, B) {
    set_name("Параллелограмм");
}
