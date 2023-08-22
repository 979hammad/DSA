#include<iostream>
using namespace std;

int main(){

  int arr[10] = {1, 2, 3, 4};
  char ch[6] = "abcde";

  cout<<"arr = "<<arr<<endl; // address of first block of arr element 
  cout<<"ch = "<<ch<<endl; // it will display the string  
  cout<<"&ch = "<<&ch<<endl; // it will print address

  char *p = &ch[0];
  cout<<"*p = "<<*p<<endl; //a
  cout<<"p = "<<p<<endl; //abcd
  cout<<"&p = "<<&p<<endl; //it will prinnt address
  cout<<"*(p + 1) = "<<*(p+1)<<endl; //b 
  cout<<"*(p + 2) = "<<*(p+2)<<endl; //c
  


  return 0;
}