#include<iostream>
using namespace std;

bool binarySearch(int arr[], int k, int s, int e){
  
  //1st base case
  if(s > e)
    return 0;
  
  int mid = s + (e-s)/2;
//   2nd base case 
  if(arr[mid] == k){
    return 1;
  }
  
  if(arr[mid] < k){
    return binarySearch(arr, k, mid+1, e);
  }else{
    return binarySearch(arr, k, s, mid-1);
  }
}

int main(){
  
  int arr[5] = {4, 8, 10, 11, 12};
  int key = 80;

  if(binarySearch(arr, key, 0, 5)){
    cout<<"Element found "<<endl;
  }else{
    cout<<"Element not found "<<endl;
  }
  
  return 0;
}