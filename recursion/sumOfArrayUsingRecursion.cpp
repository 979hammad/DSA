#include<iostream>
using namespace std;

int getSumArr(int arr[], int size){
   int sum = 0;

   //base condition
   if(size == 0)
    return 0;
   
   if(size == 1)
    return arr[0];

   //recursive call
   int remainingPart = getSumArr(arr+1, size-1);
   return sum = arr[0] + remainingPart;
 
}

int main(){
  
  int arr[5] = {4, 8, 10, 11, 2};
  cout<<"Sum is = "<<getSumArr(arr, 5);
  
  return 0;
}