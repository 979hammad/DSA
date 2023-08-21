#include<iostream>
using namespace std;

int main(){

  int num = 5;
  int *p = &num;

  cout<<p<<endl;//adress of num
  cout<<*p<<endl;//value of num
  
  //bad practice to initialize
//   int *q;
//   q = &num;

  //if you want to declare in advance 
  int *q = 0;
  q = &num;

  //some practice questions 
  int num2 = 5;
  int a = num2;
  a++;
  cout<<"The value of a is = "<<a<<endl; //6
  cout<<"The value of num2 is = "<<num<<endl; //5
  
  //2nd question
  cout<<"QUESTION 2"<<endl;
  int num3 = 5;
  int *p1 = &num3;
  int a2 = *p;
  a2++;
  cout<<"The value of a2 is = "<<a2<<endl; //6
  cout<<"The value of num3 is = "<<num3<<endl; //3

  //3rd question
  cout<<"QUESTION 3"<<endl;
  int num4 = 5;
  int *p2 = &num4;
  (*p2)++;   //*p2++ and if we do it then no change will occur at *p and num4
  //(*p2)++ -> matlab ye ab *p2 jahan point kr rha ha whan jaye ge or uss 
  //value ko increment kr de ge
  cout<<"The ans of *p2 is = "<<*p2<<endl;
  cout<<"The value of num4 is = "<<num4<<endl; 
  
  //4th question
  cout<<"QUESTION 4"<<endl;
  //to copy one pointer to other 
  int *q2 = p2;
  cout<<q2<<" - "<<p2<<endl; //both will display same address because 
  // p2 before have value address of num4 and that address is also 
  // copied in *q also
  cout<<*q2<<" - "<<*p2<<endl; // same value bcz both pointing to num4

  //5th question
  cout<<"QUESTION 5"<<endl;
  int i = 5;
  int *t = &i;
  cout<<"Now the t pointer is storing address of i = "<<t<<endl;
  t++; //by this we have incremented the address value by 4 bytes because 
  // the address it is storing is of int type if it was of char type then
  // by one byte .... and in this way so on ...
  cout<<"After incrementing t++ = "<<t<<endl;


    return 0;
}