#include<iostream>
using namespace std;
#define PI 3.14
int main(){
    float r,A,V;
    cout<<"For the spher."<<endl<<"Enter the radius : ";
    cin>>r;                                // r = radius
    A=4*PI*r*r;                            // For sphere, curved surface area = Total surface area i'e CSA = TSA =A
    V=(4/3)*PI*r*r*r;                      // v = Volume
    cout<<"Curved surface area : "<<A<<endl<<"Total surface area : "<<A<<endl<<"Volume : "<<V;
}