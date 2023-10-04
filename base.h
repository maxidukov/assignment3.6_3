#pragma once
#include <iostream>
#include <initializer_list>

class Base {
  int sidenum;
  std::string name;
  double *params;

public:
  Base(std::initializer_list<double>);
  Base();
  int get_sidenum();
  std::string get_name();
  void set_sidenum(int);
  void set_name(std::string);
  void print_info();
  Base(const Base &);
  Base & operator=(const Base &);
  ~Base();
};