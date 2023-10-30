#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,LSA,TSA,V;          
    cout<<"For the cube :-"<<endl<<"Enter the side : ";
    cin>>a;                    //a = length of each side
    LSA=4*a*a;                 //LSA = lateral surface area
    TSA=6*a*a;                 //TSA = total surface area
    V=a*a*a;                   // v = volume
    cout<<endl<<"Volume : "<<V<<endl<<"Lateral surface area : "<<LSA<<endl<<"Total surface area : "<<TSA;
    return 0;
}