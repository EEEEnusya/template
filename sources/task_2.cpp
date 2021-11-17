// Copyright 2018 Your Name <your_email>
#include <header.hpp>
#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
  int y;
  y=size(input);
    int x=0;
    for ( int i=0; i<y;++i)
    {
      x=x+input[i];
    }
    return x;
    return 0;
}

int square_sum(const std::vector<int>& input) {
  int y;
  y=size(input);
    int x=0;
    for ( int i=0; i<y;++i)
    {
      x=x+input[i]*input[i];
    }
 return x;
    return 0;
}

int sum_six(const std::vector<int>& input) {
   int x=0;
   for ( int i=0; i<6; ++i)
   {
     x=x+input[i];
   }
   return x;
    return 0;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
    int x=0;
    for ( int i=k1; i<k2+1; ++i)
    {
      x=x+input[i];
    }
    return x;
    return 0;
}

int mean(const std::vector<int>& input) {
  int y;
  y=size(input);
    int x=0;
    for ( int i=0; i<y; ++i)
    {
      x=x+input[i];
    }
    int a;
    a=x/size(input);
    return a;
    return 0;
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
    int x=0;
    for ( int i=s1; i<s2+1; ++i)
    {
      x=x+input[i];
    }
    int a;
    a=x/(s2-s1+1);
    return a;
    return 0;
}
