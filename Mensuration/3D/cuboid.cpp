#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,LSA,TSA,V;          
    cout<<"For the cube :-"<<endl<<"Enter lenghth : ";
    cin>>a;                    //a = length
    cout<<"enter breadth : ";
    cin>>b;                    // b = breadth
    cout<<"enter height : ";
    cin>>c;                    // c = height
    LSA=2*(a*c+b*c);                 //LSA = lateral surface area
    TSA=2*(a*b+b*c+a*c);                 //TSA = total surface area
    V=a*a*a;                   // v = volume
    cout<<endl<<"Volume : "<<V<<endl<<"Lateral surface area : "<<LSA<<endl<<"Total surface area : "<<TSA;
    return 0;
}