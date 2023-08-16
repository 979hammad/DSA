#include<iostream>
using namespace std;

void swapAlterEle(int arr[], int size){
    
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void printArr(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {2, 5, 9, 7, 1};
    swapAlterEle(arr , 5); 
    printArr(arr, 5);
    return 0;
}