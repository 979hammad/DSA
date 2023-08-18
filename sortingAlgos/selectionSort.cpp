#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
   
   for(int i = 0; i < n-1; i++){
     for(int j = i+1; j < n; j++){
        if(arr[j] < arr[i]){
            int temp = arr[j];
              arr[j] = arr[i];
              arr[i] = temp;
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
    selectionSort(arr, 5);
    printArr(arr, 5);
    return 0;
}