#include<iostream>
#include<algorithm>
using namespace std;

int partition(int arr[], int s, int e){
   //here we are choosing last element as pivot element
   int pivot = arr[e];
   int i = s-1; // after this loop i will be the last smallest element before pivot
   for(int j=s; j<e; j++){
     if(arr[j] < pivot){ //ager array me koi bhe chota element ho pivot se
        i++; //pehle to i ko increment kr do
        swap(arr[i], arr[j]);
     }
     //ager arr[j] bada ha pivot se to sirf j++ kr do no swaping and no increment in i
   }
   // i=last smallest element than the pivot point 
   
   swap(arr[i+1], pivot);
   return i+1; // returning pivot ka index
}

void quickSort(int arr[], int s, int e){
 
   if(s >= e){
    return;
   }
   
   int pivot = partition(arr, s, e);
   quickSort(arr, s, pivot-1);
   quickSort(arr, pivot+1, e);
   
};

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5] = {55, 55, 56, 29, 35};
    quickSort(arr, 0, 5);
    printArr(arr, 5);
    return 0;
}