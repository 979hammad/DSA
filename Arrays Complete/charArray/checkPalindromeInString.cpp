#include<iostream>
using namespace std;

bool removeUnwanted(char s){
    if((s >= 'A' && s<= 'Z' ) || (s >= 'a' && s <= 'z') || (s >= '0' && s<= '9')){
        return 1;
    }
      return 0;
}

char toLowerCase(char letter){
    if(letter >= 'A' && letter <= 'Z'){
       return letter - 'A' + 'a'; 
    }else{
        return letter;
    }
}

bool checkPalindrome(string s){
    bool isPalid = true;
    int e = s.length()-1;

    for(int i=0; i<s.length(); i++){
      if( s[i] != s[e-i]){
         isPalid = false;
         break;
      }
    }
    
 return isPalid;
};

bool isPalindrome(string s){
    //Removing unwanted characters like space or special characters
    string temp;
    for(int i=0; i<s.length(); i++){
        if(removeUnwanted(s[i])){
            temp.push_back(s[i]);
        }
    }

    // converting to lowercase 
    for(int i=0; i<s.length(); i++){
        temp[i] = toLowerCase(temp[i]);
    }

    return checkPalindrome(temp);
}


int main(){
    // check palindrome a string 
    string enteredString;
    cin>>enteredString; //a man, A plan, a canal: pansama
    
    if(isPalindrome(enteredString)){
        cout<<"Is palindrome"<<endl;
    }else{
        cout<<"Is not a palindrome"<<endl;
    }
    
    return 0;
}