#include<iostream>
#include<algorithm>
using namespace std;

void solve(string digit, int index, string output, vector<string>& ans, string mapping[]){
 
   //base case
   if(index >= digit.length()){
      ans.push_back(output);
      return;
   }

   int number = digit[index] - '0';
   string value = mapping[number];

   for(int i=0; i<value.length(); i++){
      output.push_back(value[i]);
      solve(digit, index+1, output, ans, output);
      output.pop_back();
   }
}

vector<string> letterCombination(string digit){
    vector<string> ans;
    if(digit.length() == 0){
        return ans;
    }
    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digit, index, output, ans, mapping);
    return ans;
};



int main(){
  string digit = "23";
  cout<<letterCombination(digit);

  return 0;
}