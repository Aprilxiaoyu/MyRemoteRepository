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
   static int NrStudents;
   int score;
   void ComputeNrObjectsCreated();
public:

    virtual void printUser();
    Student(string n,int s);
    int GetNrStudents();
};



#endif // MYCLASSES_H_INCLUDED
