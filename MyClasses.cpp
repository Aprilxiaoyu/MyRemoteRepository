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
