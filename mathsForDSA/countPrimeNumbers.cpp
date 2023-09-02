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

    int n, count=0;
    cout<<"Enter number to check is prime or not"<<endl;
    cin>>n;
    
    for(int i=2; i<n; i++)
       if(isPrime(n))
          count ++;
    
    cout<<"The number of prime exits are = "<<count<<endl;
    return 0;
}