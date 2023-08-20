#include<iostream>
using namespace std;

void rowWise(int arr[][4], int n, int m){
    cout<<"printing row wise sum ";
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
           sum += arr[i][j];
        }
        cout<<sum<<" ";
        sum = 0;
    }
    cout<<endl;
}

void colWise(int arr[][4], int n, int m){
    cout<<"printing column wise sum ";
    for(int j=0; j<m; j++){
        int sum = 0;
        for(int i=0; i<n; i++){
           sum += arr[i][j];
        }
        cout<<sum<<" ";
        sum = 0;
    }
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
    
    rowWise(arr, 3, 4);
    colWise(arr, 3, 4);
    return 0;
}