#include<iostream>
using namespace std;

int gcd(int a, int b){

    if(a==0)
      return b;

    if(b==0)
      return a;

    while(a != b){
        if(a>b){
            a = a - b;
        }else{
            b = b - a;
        }
    }    
    return a;
}

int main(){

    int a, b;
    cout<<"Enter first number = ";
    cin>>a;
    cout<<"Enter 2nd number = ";
    cin>>b;

    cout<<"GCD is = "<<gcd(a, b)<<endl;
    
    return 0;
}