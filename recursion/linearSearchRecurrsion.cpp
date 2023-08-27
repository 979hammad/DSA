#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
  
  if(size == 0)
    return 0;
  
  if(arr[0] == key){
    return 1;
  }else{
    bool remainingArr = linearSearch(arr+1, size-1, key);
    return remainingArr;
  }
   
}

int main(){
  
  int arr[5] = {4, 8, 10, 11, 2};
  int key = 8;

  if(linearSearch(arr, 5, key)){
    cout<<"Element found "<<endl;
  }else{
    cout<<"Element not found "<<endl;
  }
  
  return 0;
}