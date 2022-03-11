#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

#define NrResults 4
//return the start pointer of multiple results
int *Compute(int n1, int n2,int *result){

*result=n1+n2;
*(result+1)=n1-n2;
*(result+2)=n1*n2;
*(result+3)=n1/n2;

return result;
}

int main()
{
    int num1=15,num2=3,i;
    //int p[4];
    int *p;
    //it needs to allocate memory for this pointer first.
    p=(int *)malloc(NrResults*sizeof(int));

    Compute(num1,num2,p);

    for(i=0;i<NrResults;i++)
        cout<<"result"<<i+1<<" is "<<*(p+i)<<endl;

    free(p);
    return 0;
}
