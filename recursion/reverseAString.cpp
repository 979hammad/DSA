#include<iostream>
#include<algorithm>
using namespace std;

void reverseAString(string &s, int i, int j){
  if(i>j)
    return;

  swap(s[i], s[j]);
  i++; j--;
  reverseAString(s, i, j);
  
}

int main(){
  // reverse a String using string

    string s = "hammad";
    reverseAString(s, 0, s.length()-1);
    
    cout<<"Reversed string is = "<<s;
  return 0;
}