#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1)
      return false;

    for(int i=2; i<n; i++){
        if(n%i==0){
            return false; 
        }
    }
    return true;
}

int main(){

    int n;
    cout<<"Enter number to check is prime or not"<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<" is a prime number"<<endl;
    }else{
        cout<<" is not a prime number"<<endl;
    }
    return 0;
}