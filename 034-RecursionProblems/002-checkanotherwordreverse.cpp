#include<iostream>
using namespace std;

//two words given is second word is reverse of first word checking done

void reverseString(string &word,string &word2,int w1s,int w2e){
    if(word.length() != word2.length()){
        cout<< "size is not samr" <<endl; 
        return;
    } 

    if(word[w1s]==word2[w2e]){
        reverseString(word,word2,++w1s,--w2e);
        cout<< "valid" <<endl; 
    }
    else{
        cout<< "Not valid" <<endl; 
    }
    
}
                  
int main(){
    string word="ganesh";
    cout<< word <<endl; 
    string word2="mahesh";

    reverseString(word,word2,0,word2.length()-1);
    
    
    return 0;
}