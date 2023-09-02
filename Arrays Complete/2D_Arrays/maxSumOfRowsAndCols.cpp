#include<iostream>
using namespace std;

int rowWise(int arr[][4], int n, int m){
    int max = -1;
    int maxIndex = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
           sum += arr[i][j];
        }
        if(sum > max){
         max = sum;
         maxIndex = i;
        }  
    }
    cout<<"maximum sum in rows is = "<<max<<endl;
    return maxIndex;
}

int colWise(int arr[][4], int n, int m){
    int max = -1;
    int maxIndex = 0;
    for(int j=0; j<m; j++){
        int sum = 0;
        for(int i=0; i<n; i++){
           sum += arr[i][j];
        }
        if(sum > max){
          max = sum;
          maxIndex = j;
        }
         
    }
     cout<<"maximum sum is in cols = "<<max<<endl;
     return maxIndex;
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
    
    int maxRowIndex = rowWise(arr, 3, 4);
    int mamxColIndex = colWise(arr, 3, 4);
    cout<<"Maximum row index = "<<maxRowIndex<<endl;
    cout<<"Maximum col index = "<<mamxColIndex<<endl;
    return 0;
}