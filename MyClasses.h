#ifndef MYCLASSES_H_INCLUDED
#define MYCLASSES_H_INCLUDED

#include <iostream>

using std::string;
using std::cout;

class User{
  int age;

public :
  string name;
  int get_age();

  User(string name);
  ~User();
  User operator+(User &u1);
  void printUser();
};

class Student:public User{
   int score;

public:

    virtual void printUser();
    Student(string n,int s);
};



#endif // MYCLASSES_H_INCLUDED
