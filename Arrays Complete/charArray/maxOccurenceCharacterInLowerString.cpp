#include<iostream>
using namespace std;

char maxOccurence(string s){
    //counting characters let suppose each character is correspondence
    //to a number from 0 - 15 in a arr[26] for all alphabets 
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++){
        
        int number = 0;
        number = s[i] - 'a';
        //niche wle line ka matlab ye ha k jb jaise ager a ha tu a ko hum ne
        //0 index dia ha na tu arr[0] per jitne dfa a aye ga string me utna/ 
        //increment hota jaye ga 
        arr[number]++;
    }

    // to find max in an array 
    int max=-1, maxIndex=-1;
    for(int i=0; i<26; i++){
        if(max < arr[i]){
          maxIndex = i;
          max = arr[i];
        }
    }

    //to return character at the max index 
    return maxIndex + 'a';
}

int main(){
    // max occurance of a character in a given lower string
    string enteredString;
    cin>>enteredString; //testtt
    
    cout<<maxOccurence(enteredString)<<endl;
    
    return 0;
}