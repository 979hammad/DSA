#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int *arr, int n){
  
  //base case
  if(n == 0 || n == 1)
    return;

  // aik sb se badre ko end per pohancha do
  for(int i=0; i<n-1; i++){
    if(arr[i] > arr[i+1]){
       swap(arr[i], arr[i+1]);
    }
  }

  //recursive call
  bubbleSort(arr, n-1);

}  

int main(){
  // sort array using bubble sort

  int arr[5] = {5, 2, 8, 3, 20 };
  bubbleSort(arr, 5);

  for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
   

    
    
  return 0;
}