#include <iostream>
#include <initializer_list>
#include "base.h"

Base::Base(std::initializer_list<double> arglist) {    
    set_sidenum(arglist.size() / 2);
    int i{};
    params = new double[sidenum * 2];
    for (double const &val : arglist) {
      if (i == sidenum * 2) {
        std::cout << "Even number of arguments needed. Last argument ignored\n";
        break;
      } else {
        params[i++] = val;
      }
    }
    set_name("Фигура");
}
Base::Base(){
    set_sidenum(0);
    set_name("Фигура");
    params = nullptr;
}
int Base::get_sidenum() { return sidenum; }
std::string Base::get_name() { return name; }
void Base::set_sidenum(int sidenum) { this->sidenum = sidenum; }
void Base::set_name(std::string name) { this->name = name; }
void Base::print_info() {
    std::cout << name << ": "
              << "\n";
    if (params) {
      char symb = 'a';
      std::cout << "Стороны: ";
      for (int i{}, j{}; i < sidenum * 2; ++i, ++j) {
        if (i == sidenum) {
          symb = 'A';
          std::cout << "\nУглы: ";
          j = 0;
        }
        std::cout << char(symb + j) << "=" << params[i] << " ";
      }
    } else {
      std::cout << "Количество сторон: " << sidenum;
    }
    std::cout << std::endl << std::endl;
  }
Base::Base(const Base &bs_first)
      : sidenum(bs_first.sidenum),
        name(bs_first.name) { // deep copy constructor
    if (bs_first.params) {
      params = new double[sidenum * 2];
      for (int i = 0; i < sidenum * 2; i++)
        params[i] = bs_first.params[i];
    } else
      params = nullptr; // this is for Base objects with uninitialized params
  }
Base& Base::operator=(const Base &bs_first) { // deep copy assignment overloading
    // self-assignment is a special case: don't need to do anything
    if (this == &bs_first) {
      return *this;
    } else {
      sidenum = bs_first.sidenum;
      name = bs_first.name;
      if (bs_first.params) { 
        params = new double[sidenum * 2];
        for (int i = 0; i < sidenum * 2; ++i) { // copy bs_first's values
          params[i] = bs_first.params[i];       // into this array
        }
      } else
        params = nullptr; // this is for Base objects with uninitialized params
      return *this;
    }
  }
Base::~Base(){
      delete [] params;
}