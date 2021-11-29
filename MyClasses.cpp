#include "MyClasses.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int User::get_age(){
  return this->age;
}

User::User(string name){
   this->name=name;
   this->age=18;
   cout<<"constructor \n";
}

User::~User(){
   cout<<"destructor \n";
}

User User::operator+(User &u1){

  this->name=this->name+u1.name;
  this->age=u1.get_age()+this->age;
  return *this;
}

void  User::printUser(){
  cout<<this->name<<"'s age is"<<this->age<<endl;
}

void Student::printUser(){
     cout<<this->name<<"'s score is "<<this->score<<endl;
     cout<<"In total there are "<<GetNrStudents()<<" students."<<endl;
   }

Student::Student(string n, int s):User(n){
  this->score=s;
  ComputeNrObjectsCreated();
}

void Student::ComputeNrObjectsCreated(){
  this->NrStudents++;
}

int Student::NrStudents=0;

int Student::GetNrStudents(){
  return this->NrStudents;
}

