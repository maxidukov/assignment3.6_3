#include <iostream>
#include <initializer_list>
#include "square.h"

Square::Square(double a) : Rectangle(a, a) { set_name("Квадрат"); }
