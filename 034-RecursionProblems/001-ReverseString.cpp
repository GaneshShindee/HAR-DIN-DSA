#include<iostream>
using namespace std;

void reverseString(string &word,int i){
    if(i>word.length()-1-i) return;
    int n=word.length()-1-i;
    swap(word[i++],word[n]);
    reverseString(word,i);
}
                  
int main(){
    string word="ganesh";
    cout<< word <<endl; 
    reverseString(word,0);
    cout<< word <<endl; 
    
    return 0;
}