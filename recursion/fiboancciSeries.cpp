#include<iostream>
using namespace std;

int fib(int num){
    
  //base condititon
  if( num == 0 )
   return 0;
  //2nd base condition
  if( num == 1 )
   return 1;

  int ans = fib(num-1) + fib(num-2);
  return ans;

}

int main(){
  
  // let num = 3;
  // as fibonacci series is 0 1 1 2 3 5 
  // if we start from 0th index then ans for num = 3 is 2  
  int num;
  cin>>num;
 
  cout<<"Fibonacci series element exists at "<<num<<"rd position is = "<<fib(num)<<endl;
  
  return 0;
}