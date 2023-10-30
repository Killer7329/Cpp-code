#include<iostream>
using namespace std;
int operation(int a, int b, char c){
    int r;
    switch(c){
        case '+' : 
            r=a+b;
            break;
        case '-' : 
            r=a-b;
            break;
        case '*':
            r=a*b;
            break;
        case '%':
            r=a%b;
            break;
        case '/':
            r=a/b;
            break;
    }
    return r;
}
int main(){
    int x,a,b;
    char c;
    cout<<"enter the number of operands : ";
    cin>>x;
    cout<<"enter the numbers and operator : "<<endl;
        cin>>a;
    for(int i=1;i<x;i++){
        cin>>c;
        cin>>b;
        a=operation(a,b,c);
    }
    cout<<"the result : "<<a;
    return 0;
}