#include<iostream>
using namespace std;

void mergeAgain(int arr[], int s, int mid, int e){
    int len1 = mid-s+1;
    int len2 = e-mid;
   
    int arr1[len1], arr2[len2];
    //copy first half in arr1
    int k=s;
    for(int i=0; i<len1; i++){
        arr1[i] = arr[k++]; // first element will be copy then main array index will be incremented        
    }
    
    //coping 2nd half in arr2
    k=mid+1;
    for(int i=0; i<len2; i++){
        arr2[i] = arr[k++]; 
    }

    // now comparing both arrays and merge them in sorted way
    int i=0, j=0;
    k=s;
    while(i<len1 && j<len2){
       if(arr1[i] < arr2[j]){
         arr[k++] = arr1[i++]; // pehle value copy then increment index
       }else{
         arr[k++] = arr2[j++];
       }
    }

    //ab qk uper && ha....ager koi bhe arr1 or arr2 ka koi element ager bach gya ho to uss ko main me copy krne k liye 
    while(i < len1){
        arr[k++] = arr1[i++];
    }
    while(j < len2){
        arr[k++] = arr2[j++];
    }
}

void mergeSort(int arr[], int s, int e){
 
   int mid = s + (e-s)/2;
   if(s >= e){
    return;
   }
   
   mergeSort(arr, s, mid);
   mergeSort(arr, mid+1, e);
   mergeAgain(arr, s, mid, e);
   
};

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5] = {55, 55, 56, 29, 35};
    mergeSort(arr, 0, 5);
    printArr(arr, 5);
    return 0;
}