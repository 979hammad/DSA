#include<iostream>
#include<algorithm>
using namespace std;

int countPrime(int n){
   int arr[n];
   int count=0;
   fill_n(arr, n, true);

   arr[0]=arr[1]= false;
   for(int i=2; i<n; i++){
    if(arr[i]){
       count++;
    }

      for(int i=2*i; i<n; i++){
        arr[i]= false;
      }
   }
   return count;
}

int main(){

    int n, count=0;
    cout<<"Enter number to check is prime or not"<<endl;
    cin>>n;
    
    cout<<"Total number of prime numbers = "<<countPrime(n);
   
    return 0;
}