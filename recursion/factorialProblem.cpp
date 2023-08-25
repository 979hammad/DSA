#include<iostream>
using namespace std;

int fact(int n){
    if( n==0 )
     return 1;
    
    //way to learn recursion
    int chotteProblem = fact(n-1);
    int badeProblem = n * chotteProblem;

    return badeProblem;
    
    //return n * fact(n-1); --> good way 
}

int main(){
  
  int n;
  cin>>n;

  cout<<"Factorial of "<<n<<" = "<<fact(n)<<endl;
  return 0;
}