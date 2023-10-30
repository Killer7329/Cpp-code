#include<iostream>
using namespace std;
int main(){
    int p,i,y,SI;
    cout<<"enter the principle amount : ";
    cin>>p;
    cout<<"enter the interest rate : ";
    cin>>i;
    cout<<"enter the year : ";
    cin>>y;
    SI=p*i*y/100;
    cout<<endl;
    cout<<"Simple interest : "<<SI;
    return 0;
}