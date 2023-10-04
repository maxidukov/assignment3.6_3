#include <iostream>
#include <initializer_list>
#include "rectangle.h"

Rectangle::Rectangle(double a, double b) : Parallelogram(a, b, 90,90) {
    set_name("Прямоугольник");
}
