#include<iostream>
using namespace std;

void updateWithoutRef(int n){
    n++;
}

void updateWithRef(int &n){
    n++;
}

int main(){

   // refrence variable means aik variable k 2 naam // address same he rhe ga 
   int n = 5;
   cout<<"Before updateWithoutRef() = "<<n<<endl;
   updateWithoutRef(n);
   cout<<"After updateWithoutRef() = "<<n<<endl;
   cout<<endl<<endl;
//    now see magic of refrence variable 
   cout<<"Before updateWithRef() = "<<n<<endl;
   updateWithRef(n);
   cout<<"After updateWithoutRef() = "<<n<<endl;

 
    return 0;
}