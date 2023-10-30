#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,A,P,S;            
    cout<<"For the scalene triangle :"<<endl<<"enter the first side : ";
    cin>>a;                                //a=first side
    cout<<"enter the second side : ";
    cin>>b;                                //b=second side
    cout<<"enter the third side : ";
    cin>>c;                                //c=third side
    P=a+b+c;                               //P=perimeter
    S=P/2;                                 //s=semiperimeter
    A=sqrt(S*(S-a)*(S-b)*(S-c));           //A=Area
    cout<<"Perimeter : "<<P<<endl<<"Area : "<<A;
    return 0;
}