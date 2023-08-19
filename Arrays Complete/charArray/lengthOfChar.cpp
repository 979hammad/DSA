#include<iostream>
using namespace std;

int lengthOfChar(char arr[]){

   int count = 0;
   for(int i=0; arr[i] != '\0' ; i++){
       count++;
   }
   return count;
};

int main(){
// calculate length of character
    char name[10];
    cin>>name;
    int len = lengthOfChar(name);
    cout<<"length is = "<<len<<endl;
    return 0;
}