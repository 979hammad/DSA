#include<iostream>
using namespace std;

void homeReaching(int curr, int dest){
  cout<<"current location = "<<curr<<" and destination = "<<dest<<endl;
  
  //base condition
  if(curr == dest){
    cout<<"Reached Home";
    return;
  }
  
  //recursive call
  homeReaching(curr+1, dest);

}

int main(){
    
  int currentLoc=1, dest=10;
  homeReaching(currentLoc, dest);
  
  return 0;
}