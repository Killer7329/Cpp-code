#include<iostream>
using namespace std;
#define PI 3.14
int main(){
    float r,A,P;
    cout<<"using PI =3.14"<<endl<<endl;
    cout<<"enter the radius of the circle : ";
    cin>>r;
    A=PI*r*r;
    P=2*PI*r;
    cout<<endl<<"Area of the circle : "<<A<<endl<<"Perimeter of the circle : "<<P;
    return 0;
}