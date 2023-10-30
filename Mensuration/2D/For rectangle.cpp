#include<iostream>
using namespace std;
int main(){
    int a,b,A,P;
    cout<<"enter the length : ";
    cin>>a;
    cout<<"enter the breadth : ";
    cin>>b;
    A=a*b;
    P=2*(a+b);
    cout<<endl<<"Area : "<<A<<endl<<"Perimeter : "<<P;
    return 0;
}