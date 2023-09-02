#include<iostream>
using namespace std;

int lengthOfChar(char arr[]){

   int count = 0;
   for(int i=0; arr[i] != '\0' ; i++){
       count++;
   }
   return count;
};

void reverse(char arr[], int n){

   int s=0;
   int e=n-1;
   while(s<e){
    swap(arr[s++], arr[e--]);
   }
};

int main(){
// reverse a charString
    char name[10];
    cin>>name;
    cout<<endl;
    int len = lengthOfChar(name);
    reverse(name, len);
    cout<<"Reverse is = "<<name<<endl;
    return 0;
}