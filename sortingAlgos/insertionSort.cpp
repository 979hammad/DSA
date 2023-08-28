#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
   
   for(int i = 1; i < n; i++){
     int temp = arr[i];
     int j = i-1;
     
     while(arr[j] > temp && j >= 0){
        arr[j+1] = arr[j];
        j--;
     }
     arr[j+1] = temp;
   }
};

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5] = {40, 2, 55, 27, 35};
    insertionSort(arr, 5);
    printArr(arr, 5);
    return 0;
}