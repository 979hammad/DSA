#include<iostream>
using namespace std;

int main(){

  int arr[10] = {1, 2, 3, 4};
  cout<<"Address of first memory block (arr) = "<<arr<<endl;
  cout<<"Address of first memory block (&arr[0]) = "<<&arr[0]<<endl;
  cout<<"Element at first memory block (arr[0]) = "<<arr[0]<<endl;
  
  cout<<"Element at first memory block (*arr) = "<<*arr<<endl;
  //cout<<"Addition of 1 at first memory block (*arr + 1) = "<<*arr + 1<<endl; 
  cout<<"Element at 2nd memory block (*(arr+1)) = "<<*(arr + 1)<<endl; // first incrementing the address by 4 bytes then displaying its value 
  cout<<"Element at 1st memory blcok (*(arr)+1) = "<<*(arr)+1<<endl; // first point to the first memory block then incrementing its value by one
  cout<<"Element at 3rd memory block (arr[2]) = "<<arr[2]<<endl;
  cout<<"Element at 3rd memory block (*(arr+2)) = "<<*(arr + 2)<<endl; // first incremeting the address by 2 integers (8 bytes) then pointing to that value 
  
  /////////////////-----pointers in array and size of------//////////////////////////////
  int temp[10] = {1, 2};
  cout<<" sizeof(temp) = "<<sizeof(temp)<<endl; // 4 bytes each block * 
  cout<<" sizeof(*temp) = "<<sizeof(*temp)<<endl; // 
  cout<<" sizeof(&temp) = "<<sizeof(&temp)<<endl;
  
  int *ptr = &temp[0];
  cout<<" sizeof(ptr) = "<<sizeof(ptr)<<endl;
  cout<<" sizeof(*ptr) = "<<sizeof(*ptr)<<endl;
  cout<<" sizeof(&ptr) = "<<sizeof(&ptr)<<endl; 

    return 0;
}