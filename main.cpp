#include <iostream>
#include <vector>
#include <array>
#include "MyClasses.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
std::vector <int> data;
//std::array S<int,10> MyArray;

#define NrPositions 12

int HomeNr=6;
bool Position[NrPositions];

class Myclass{
  int age;

public :
  string name;
  int get_age(){
    return age;
   }

  Myclass(string name){
    this->name=name;
    this->age=18;
    cout<<"constructor \n";
  }
  ~Myclass(){
    cout<<"destructor \n";
  }

};

int ComputeHomeNr(int Angle){
 int result;
 int Abs=Angle>=360?(Angle-360*(Angle/360)):Angle;
 result=HomeNr+Abs/30;

 if(result>12) result=result-12;

 return result;
}

int ComputeRotateAngle(int Nr){
 int PickPosNr=6+HomeNr>12?(HomeNr-6):6+HomeNr;
 int diff=(Nr-PickPosNr)>=0?(Nr-PickPosNr):(12+Nr-PickPosNr);
 int result=diff*30;
 return result;
}

int ComputeAngle(){
int k;
int NrEmpty;
int Angle;

for(k=0;k<NrPositions;k++){
   NrEmpty=HomeNr+k;
   if(NrEmpty>=12) NrEmpty=NrEmpty-12;

   if(Position[NrEmpty]==false){
      Angle=30*(k+1);
      break;
   }

}

cout<<"It should rotate "<<Angle<<" degree to arrive number "<<(NrEmpty+1)<<endl;

}

int main()
{   /*
    int i;

    cout<<"Please input the states of 12 positions."<<endl;

    for( i=0;i<NrPositions;i++)
     cin>>Position[i];

    cout<<"The states of 12 positions are: "<<endl;
    for(i=0;i<NrPositions;i++)
     cout<<Position[i]<<"\t";
    cout<<endl;

    ComputeAngle();
    */

    /*
     User user1("Xiaoyu");
     User user2(" Qu");
     User user3=user1+user2;

     cout<<user3.name<<endl;
     cout<<user3.get_age()<<endl;
    */

    Student x("Xiaoyu",100);
    //x.SetScore(100);
    x.printUser();

    return 0;
}
