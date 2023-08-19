#include<iostream>
using namespace std;

bool checkPalindrome(char arr[], int n){
  bool isPalid = true;
    int e = n-1;

    for(int i=0; i<n; i++){
      if( arr[i] != arr[e-i]){
         isPalid = false;
         break;
      }
    }
    
 return isPalid;
};

int lengthOfChar(char arr[]){

   int count = 0;
   for(int i=0; arr[i] != '\0' ; i++){
       count++;
   }
   return count;
};

int main(){

    char name[10];
    cin>>name; //hammad --> length = 6
    int len = lengthOfChar(name);

    if(checkPalindrome(name, len)){
        cout<<"Is palindrome"<<endl;
    }else{
        cout<<"Is not a palindrome"<<endl;
    }
    
    return 0;
}