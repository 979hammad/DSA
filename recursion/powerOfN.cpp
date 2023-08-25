#include<iostream>
using namespace std;

int power(int num, int pow){
    if( pow==0 )
     return 1;
    
    //way to learn recursion
    int chotteProblem = power(num, pow-1);
    int badeProblem = num * chotteProblem;

    return badeProblem;
    
    //return num * power(num, pow-1); --> good way 
}

int main(){
  
  int num, pow;
  cin>>num>>pow;

  cout<<"Ans is = "<<power(num, pow)<<endl;
  return 0;
}