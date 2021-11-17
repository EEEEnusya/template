// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string& name) {
    int x;
    std::string str(name);
    x=str.size();
    if (x%2==0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
    return false;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
    int x,y;
    std::string str1(name_one);
    x=str1.size();
    std::string str2(name_two);
    y=str2.size();
    if (x>y)
    {
      return true;
    }
    else
    {
      return false;
    }
    return false;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
    int x,y,z;
    std::string str1(name_one);
    x=str1.size();
    std::string str2(name_two);
    y=str2.size();
    std::string str3(name_three);
    z=str3.size();
    if (x>y && x>z)
    {
      the_longest= name_one;
    }
    if(y>x && y>z)
    {
      the_longest=name_two;
    }
    if( z>x && z>y)
    {
      the_longest=name_three;
    }
    if (x<y && x<z)
    {
      the_shortest= name_one;
    }
    if(y<x && y<z)
    {
      the_shortest=name_two;
    }
    if( z<x && z<y)
    {
      the_shortest=name_three;
    }
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
    int z;
    std::string x="";
    z=word.length();
    if( n>=0 && n<=z)
    {
      for ( int i=m; i<n+1; ++i)
      {
        x+=word[i];
      }
    }
    if (n>=0 && n>z)
    {
      n= word.length() -1;
      for ( int i=m; i< n+1; ++i)
      {
        x+=word[i];
      }
    }
    return x;
    return std::string();
}

// Task 9.
void add_stars(std::string& word) {
    int x;
    x=word.length();
    std::string y="";
    for ( int i=0; i<x; ++i)
    {
      y+="*";
    }
    y+=word;
    for( int i=0; i<x; ++i)
    {
      y+="*";
    }
    word=y;
}

// Task 10.
int percent_of_a(const std::string& word) {
    int x,y;
    x=word.length();
    y=0;
    for ( int i=0; i<x;++i)
    {
      if ( word[i]=='a')
      {
        y+=1;
      }
    }
    return (y*100)/x;
    return 0;
}

// Task 11.
std::string replace_can(const std::string& new_word) {
    int x,i=0;
    std::string z="Can you can a can as a canner can can a can?";
    x=z.length();
    std::string y="";
    while (i<x)
    {
      if( z[i]=='c'&& z[i+1] =='a' && z[i+2]=='n')
      {
        y+=new_word;
        i+=3;
      }
      else
      {
        y+=z[i];
        i+=1;
      }
    }
    return y;
    return std::string();
}