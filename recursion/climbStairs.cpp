#include<iostream>
using namespace std;

int climbStairs(int nth){
    
  //base condititon
  if(nth < 0) //means -stair se start krna jb minus me stairs hote he nai
    return 0;
  //2nd base condition
  if(nth == 0) //means aap usse he stair per khade rhe hn means aik he rsta ha k jump lga kr wapis usse jgah 
    return 1;
  
  int ans = climbStairs(nth - 1) + climbStairs(nth - 2);// mtlb 2 he rste hn k ya to hum last step per ya tu aik step piche se aye hn ya 2 step piche se 
  return ans;
}

int main(){
  int nth;
  cin>>nth;
 
  cout<<"Total number of steps to reach at "<<nth<<"th position are = "<<climbStairs(nth)<<endl;
  return 0;
}