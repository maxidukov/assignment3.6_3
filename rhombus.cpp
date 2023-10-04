#include <iostream>
#include <initializer_list>
#include "rhombus.h"

Rhombus::Rhombus(double a, double A, double B) : Parallelogram(a, a, A, B) {
    set_name("Ромб");
}
