#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j){
  
  //base case
  if(i>j)
   return true;

  if(s[i] != s[j]){
    return false;
  }else{
    //base case
    return checkPalindrome(s, i+1, j-1);
  }
  
}

int main(){
  // reverse a String using string

    string s = "babab";
    if(checkPalindrome(s, 0, s.length()-1)){
        cout<<"is palindrome"<<endl;
    }else{
        cout<<"is not palindrome"<<endl;
    }

    
    
  return 0;
}