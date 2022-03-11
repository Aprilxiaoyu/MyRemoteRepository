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

int HomeNr=12;
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

 //result=HomeNr+Abs/30;
 //if(result>12) result=result-12;

 	result=HomeNr-Abs/30;
	if(result<=0) result=result+12;

 return result;
}

int ComputeRotateAngle(int Nr){
 int PickPosNr=6+HomeNr>12?(HomeNr-6):6+HomeNr;
 //int diff=(Nr-PickPosNr)>=0?(Nr-PickPosNr):(12+Nr-PickPosNr);
 int diff=(PickPosNr-Nr)>=0 ? (PickPosNr-Nr) : (12+PickPosNr-Nr);
 int result=diff*30;
 cout<<" it needs to rotate "<<result<< " degree to pick Nr "<<Nr <<endl;
 return result;
}

int ComputeAngle(){
int k;
int NrEmpty;
int Angle;

for(k=0;k<NrPositions;k++){
   //NrEmpty=HomeNr+k;
   //if(NrEmpty>=12) NrEmpty=NrEmpty-12;

   NrEmpty=(HomeNr-1)-k;
		if(NrEmpty<0) NrEmpty=NrEmpty+12;

   if(Position[NrEmpty]==false){
      Angle=30*(k);
      break;
   }

}

cout<<"It should rotate "<<Angle<<" degree to arrive number "<<(NrEmpty+1)<<endl;

}

int *Compute(int n1, int n2,int *result){

*result=n1+n2;
*(result+1)=n1-n2;
*(result+2)=n1*n2;
*(result+3)=n1/n2;

return result;
}
int main()
{   //User U("user name");
    //Student x("Xiaoyu",100);
    //User *p;

    //x.SetNrSubjects(10);
    //PrimaryStudent y("Juan",8);
    //MiddleStudent  z("Linda",10);
    //TotalSubjects(x,y);

    //U.printUser();
    //x.printUser();

    //p=&x;
    //(*p).printUser();
    //cout<<"z.MathScore * y.NrSubjects = "<<z.MutipltScore(y)<<endl;
    //cout<<"Xiaoyu's age is "<<x.get_age()<<endl;

//    derived myderived;
//    base *p; //pointer from base class can point to derived object,
//    //but pointer from derived class can not point to base object.
//    p=&myderived;
//    int result=0;
//
//    p->var_base=5;
//    myderived.var_derived=10;
//
//    result=p->add(p->var_base,myderived.var_derived);
//    p->print();
//    myderived.print(result);
    int num1=15,num2=3;
    //int p[4];
    int *p;
    //it needs to allocate memory for this pointer first.
    p=(int *)malloc(4*sizeof(int));

    Compute(num1,num2,p);
    cout<<"num1+num2="<<*(p)<<endl;
    cout<<"num1-num2="<<*(p+1)<<endl;
    cout<<"num1*num2="<<*(p+2)<<endl;
    cout<<"num1/num2="<<*(p+3)<<endl;


    return 0;
}
