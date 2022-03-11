#ifndef MYCLASSES_H_INCLUDED
#define MYCLASSES_H_INCLUDED

#include <iostream>

using std::string;
using std::cout;

class PrimaryStudent;
class MiddleStudent;

class User{
  int age;

public :
  string name;
  int get_age();

  User(string name);
  ~User();
  User operator+(User &u1);
  virtual void printUser();
};

class Student:public User{
   //friend PrimaryStudent;
   static int NrStudents;
   int score;
   int NrSubjects;
   void ComputeNrObjectsCreated();

public:
    void printUser();
    Student(string n,int s);
    int GetNrStudents();
    void SetNrSubjects(int);
    friend void TotalSubjects(Student s1, PrimaryStudent s2);
};

class PrimaryStudent:public User{
    int NrSubjects;
public:
    friend class MiddleStudent;
    PrimaryStudent(string namestr, int Nr);
    friend void TotalSubjects(Student s1, PrimaryStudent s2);
};

class MiddleStudent:public User{
    int MathScore;
public:
     int MutipltScore(PrimaryStudent &s);
     MiddleStudent(string str,int n);
};

class base{
 public: int var_base;
  void print();
  int add(int a, int b);
};

class derived: public base{
 public: int var_derived;
 virtual void print();
 virtual void print(int r);
};

#endif // MYCLASSES_H_INCLUDED
