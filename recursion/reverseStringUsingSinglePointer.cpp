#include<iostream>
#include<algorithm>
using namespace std;

void reverseAString(string &s, int i){
  //not right
  int n = s.length();
  if(i>n)
    return;

  swap(s[i], s[n-1-i]);

  reverseAString(s, i+1);
  
}

int main(){
  // reverse a String using string

    string s = "hammad";
    reverseAString(s, 0);
    
    cout<<"Reversed string is = "<<s;
  return 0;
}