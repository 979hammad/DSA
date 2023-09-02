#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
   
   int s = 0;
   int e = n-1;

   while(s <= e){
      int mid = s + (e-s)/2;

      if(arr[mid] == key){
        return mid;
      }
      if(key > arr[mid]){
        s = mid+1;
      }else{
        e = mid-1;
      }
   }
   return -1;
}


int main(){

    int arr[5] = {2, 5, 9, 35, 40};
    cout<<binarySearch(arr, 5, 5)<<endl;
    return 0;
}