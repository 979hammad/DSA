#include<iostream>
using namespace std;

void sayDigit(int num, string mappingArr[]){
    
  //base condititon
  if( num == 0 )
   return;
  
  //processing --> getting last digit
  int lastDigit = num%10;
  num = num/10;
  //recursive call
  sayDigit(num, mappingArr);
  cout<<mappingArr[lastDigit]<<" ";
}

int main(){
  string mappingArr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  
  int num;
  cin>>num;

  sayDigit(num, mappingArr);
  
  return 0;
}