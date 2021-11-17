// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 1.
void multi_2(std::vector<int>& input) {
  int x;
  x = size(input);
  for (int i = 0; i < x; ++i) {
    input[i] = input[i] * 2;
  }
}

void reduce_a(std::vector<int>& input, int a) {
  int x;
  x = size(input);
  for (int i = 0; i < x; ++i) {
    input[i] = input[i] - a;
  }
}

void div_on_first(std::vector<int>& input) {
  int x;
  x = size(input);
  for (int i = 1; i < x; ++i) {
    input[i] = input[i] / input[0];
  }
  input[0] = 1;
}
