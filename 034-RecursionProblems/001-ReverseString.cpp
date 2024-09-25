#include<iostream>
using namespace std;

void reverseString(string &word,int s,int e){
    if(s>e) return;
    swap(word[s++],word[e--]);
    reverseString(word,s,e);
}
                  
int main(){
    string word="ganesh";
    cout<< word <<endl; 
    reverseString(word,0,word.length()-1);
    cout<< word <<endl; 
    
    return 0;
}