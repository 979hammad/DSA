#include<iostream>
using namespace std;

int calcPower(int a, int b){
  
  //base case
  if(b==0)
   return 1;

  if(b==1)
   return a;
  
  //recursive call 
  int ans = calcPower(a, b/2);

  if(b%2 == 0){
    return ans * ans;
  }else{
    return a * ans * ans;
  }

}

int main(){
  // calculate power

    int a = 2;
    int b = 10;
    cout<<"Ans is "<<calcPower(a, b)<<endl;

    
    
  return 0;
}