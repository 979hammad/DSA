#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    
  //base condititon
  if(size==0 || size==1)
   return true;
  
  //processing 
  if(arr[0] > arr[1]){
    return false;
  }else{
    //recursive call
    bool checkingRemainingPart = isSorted(arr+1, size-1);
    return checkingRemainingPart;
  }
 
}

int main(){
  int arr[5] = {4, 8, 10, 11, 2};
  if(isSorted(arr, 5)){
    cout<<"Is sorted "<<endl;
  }else{
    cout<<"Is not sorted "<<endl;
  }
  
  return 0;
}