#include<iostream>
#include<algorithm> //Required for std::fill
using namespace std;

int main(){

    int arr[100];
    
    // for filling all spaces with 1 
    fill_n(arr, 100, 1);

    // displaying array 
    for(int i=0; i<100; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

