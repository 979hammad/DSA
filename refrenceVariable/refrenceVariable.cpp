#include<iostream>
using namespace std;

void updateWithoutRef(int n){
    n++;
}

void updateWithRef(int &n){
    n++;
}

// bad practice returing refrence variable 
// returning a refrence or pointer variable is a bad practice

int &update(int n){
    int a = n;
    int &ans = a;
    //return a; //warning refrence to local variable a returned;--bad practice
    return ans;
}

int *update2(int n){
    int b = n;
    int* ptr = &n;
    
    // return b; // --> bad practice can check eror (invalid conversion from int to int*) 
    return ptr;
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

   cout<<endl<<endl;

   // some error concepts
   cout<<"update(n) = "<<update(n)<<endl;
   cout<<"update2(n) = "<<update2(n)<<endl;
    return 0;
}