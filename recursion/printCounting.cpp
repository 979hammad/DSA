#include<iostream>
using namespace std;

void printCountingHeadRecursion(int num){
    
    //base condition
    if( num==0 )
      return;
    
    //processing
    //pehle print phir next recursive call
    cout<<num<<" "; //--> HEAD RECURSION --> output 5 3 2 1 
    //recursive call
    printCountingHeadRecursion( num-1 );
}

void printCountingTailRecursion(int num){
    
    //base condition
    if( num==0 )
      return;
    
    //recursive call
    printCountingTailRecursion( num-1 );
    // ye pehle stack me store krte rhe ge or phir return krte jaye ge or print 
    //Processing
    cout<<num<<" "; //--> TAIL RECURSION --> output 1 2 3 4 5

}

int main(){
  
  // let num = 5;
  // output -> 5 4 3 2 1
  int num;
  cin>>num;

  printCountingHeadRecursion(num);
  cout<<endl;
  printCountingTailRecursion(num);
  return 0;
}