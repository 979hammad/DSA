#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
   
   for(int i = 1; i < n; i++){
     for(int j = 0; j < n-i; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
        }
     }
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
    bubbleSort(arr, 5);
    printArr(arr, 5);
    return 0;
}