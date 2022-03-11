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
  //cout<<this->name<<"'s age is"<<this->age<<endl;
  cout<<"Print User from User Class."<<endl;
}

void Student::printUser(){
  cout<<"Print from Student Class."<<endl;
     //cout<<this->name<<"'s score is "<<this->score<<endl;
     //cout<<"In total there are "<<GetNrStudents()<<" students."<<endl;
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

void Student::SetNrSubjects(int N){
  this->NrSubjects=N;
}

PrimaryStudent::PrimaryStudent(string namestr,int Nr):User(namestr){
  this->NrSubjects=Nr;
}

//friend function do not belong to ant class
void TotalSubjects(Student s1, PrimaryStudent s2){
   cout<<"Total Subjects are "<< s1.NrSubjects+s2.NrSubjects<<endl;
}

int MiddleStudent::MutipltScore(PrimaryStudent &s){
  return (this->MathScore)*(s.NrSubjects);
}

MiddleStudent::MiddleStudent(string str, int n):User(str){
  this->MathScore=n;
}

int base::add(int a, int b){
 return(a+b);
}

void base::print(){
  cout<<"This is base print."<<endl;
}

void derived::print(int r){
  cout<<"Derived print the result is: "<<r<<endl;
}

void derived::print(){
  cout<<"This is derived print."<<endl;
}
