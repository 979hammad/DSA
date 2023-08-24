#include<iostream>
using namespace std;

int getSum(int *arr , int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i]; // arr[i] = *(arr + i)
    }

    return sum;
}

int main(){
  
// dynamic array 
//   int n;
//   cin>>n;
  // creating variable size array
  int * arr = new int[5];
  // taking input in a variable size array
  for(int i=0; i<5; i++){
    cin>>arr[i];
  }

  cout<<"Sum = "<<getSum(arr, 5)<<endl;
    return 0;
}