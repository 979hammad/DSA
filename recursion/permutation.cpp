#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(vector<int> arr, int index, vector<vector<int>>& ans){
 
   //base case
   if(index >= arr.size()){
      ans.push_back(arr);
      return;
   }

   for(int j=index; j<arr.size(); j++){
      swap(arr[index], arr[j]);
      solve(arr, index+1, ans);
      //backtracking
      swap(arr[index], arr[j]);
   }

   
}

vector<vector<int>> permutation(vector<int> &arr){
    vector<vector<int>> ans;
    int index = 0;

    solve(arr, index, ans);
    return ans;
};



int main(){
  vector<int> arr = {1,2,3};
  vector<vector<int>> permutations = permutation(arr);
  
  for(const vector<int>& perm : permutations){
        for(int num : perm){
            cout << num << " ";
        }
        cout << endl;
    }

  return 0;
}