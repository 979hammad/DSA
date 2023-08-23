#include<iostream>
using namespace std;

int main(){

  int num = 5;
  int *ptr = &num;
  int **ptr2 = &ptr;

  cout<<"num = "<<num<<endl;
  cout<<"*ptr = "<<*ptr<<endl;
  cout<<"**ptr2 = "<<**ptr2<<endl;
  
  cout<<"&num = "<<&num<<endl;
  cout<<"ptr = "<<ptr<<endl;
  cout<<"*ptr2 = "<<*ptr2<<endl;

  cout<<"&ptr = "<<&ptr<<endl;
  cout<<"ptr2 = "<<ptr2<<endl;

   return 0;
}