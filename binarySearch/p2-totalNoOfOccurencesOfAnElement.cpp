#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
   
   int s = 0, e = n-1, ans = -1;

    while(s <= e){
      int mid = s + (e-s)/2;

      if(arr[mid] == key){
        ans = mid;
        e = mid - 1;
      }else if(key > arr[mid]){
        s = mid+1;
      }else{
        e = mid-1;
      }
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key){
   
   int s = 0, e = n-1, ans = -1;

    while(s <= e){
      int mid = s + (e-s)/2;

      if(arr[mid] == key){
        ans = mid;
        s = mid + 1;
      }else if(key > arr[mid]){
        s = mid+1;
      }else{
        e = mid-1;
      }
    }
   return ans;
}


int main(){

    int arr[8] = {2, 5, 9, 10, 10, 10, 10, 40};
    cout<<"Total number of occurences = "<<(lastOccurence(arr, 8, 10) - firstOccurence(arr, 8, 10)) + 1<<endl;
    return 0; 
}