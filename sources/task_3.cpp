// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
  int x, y, z;
  x = input[0];
  y = input[1];
  z = input[2];
  input[0] = input[17];
  input[1] = input[18];
  input[2] = input[19];
  input[17] = x;
  input[18] = y;
  input[19] = z;
}
