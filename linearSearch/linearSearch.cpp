#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
 
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[5] = {2, 5, 9, 35, 40};
    cout<<linearSearch(arr, 5, 400)<<endl;
    return 0;
}