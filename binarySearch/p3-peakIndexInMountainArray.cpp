#include<iostream>
using namespace std;

int peakIndex(int arr[], int n){
    int s = 0, e = n-1;

    while( s < e ){
      int mid = s + (e-s)/2;

      if(arr[mid] < arr[mid+1]){
        s = mid + 1;
      }else{
        e = mid;
      }
    }

    return s;
}

int main(){

    int arr[4] = {3, 4, 5, 1};
    cout<<"Peak index in mountain array is = "<<peakIndex(arr , 4)<<endl;
    return 0; 
}