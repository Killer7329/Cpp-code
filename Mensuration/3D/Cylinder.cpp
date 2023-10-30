#include<iostream>
using namespace std;
#define PI 3.14
int main(){
    float r,h,CSA,TSA,V;
    cout<<"For the cylinder:"<<endl<<endl<<"Enter radius of the base : ";
    cin>>r;                        // r = Radius 
    cout<<"Enter the height : ";
    cin>>h;                        // h = Height
    CSA=2*PI*r*h;                  // CSA = Curved surface area
    TSA=2*PI*r*(r+h);
    V=PI*r*r*h;                  // TSA = Total surface area
    cout<<endl<<"Curved surface area : "<<CSA<<endl<<"Total surface area : "<<TSA<<endl<<"Volume : "<<V;
}