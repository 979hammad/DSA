#include<iostream>
using namespace std;

int binarySearch2D(int arr[][4], int key, int n, int m){
    int start = 0;
    int end = n*m -1;
    int mid = start + (end - start)/2;

    while(start<=end){
        int element = arr[mid/m][mid%m];
        if(element == key){
            return 1;
        }else if(element < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return 0;
}

int main(){
    // binary search in 2d array
    int arr[3][4];
    cout<<"Enter 12 elements with 3->rows and 4->cols"<<endl;

    for(int i=0; i<3; i++){
       for(int j=0; j<4; j++){
          cin>>arr[i][j];
       }
    }cout<<endl;
    cout<<"Enter key";
    int key;
    cin>>key;
    cout<<endl;

    if(binarySearch2D(arr, key, 3, 4)){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}