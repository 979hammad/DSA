#include<iostream>
using namespace std;

bool linearSearch(int arr[][4], int key, int n, int m){

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == key){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    // linear search in 2d array

    int arr[3][4];
    cout<<"Enter 12 elements with 3->rows and 4->cols"<<endl;

    for(int i=0; i<3; i++){
       for(int j=0; j<4; j++){
          cin>>arr[i][j];
       }
    }cout<<endl;
    
    int key;
    cout<<"Enter key";
    cin>>key;

    if(linearSearch(arr, key, 3, 4)){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }
    
    return 0;
}