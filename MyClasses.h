#ifndef MYCLASSES_H_INCLUDED
#define MYCLASSES_H_INCLUDED

#include <iostream>

using std::string;

class User{
  int age;

public :
  string name;
  int get_age();

  User(string name);
  ~User();

};



#endif // MYCLASSES_H_INCLUDED
