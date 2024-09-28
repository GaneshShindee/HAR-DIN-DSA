#include<iostream>
using namespace std;

bool checkPallindrome(string &word,int s){
    if(s>word.length()-1-s) return true;
    int n =word.length()-1-s;
    if(word[s]!=word[n]){
        return false;
    }
    else{
        checkPallindrome(word,++s);
    }

}
                  
int main(){
    string word="gahg";
    cout<< word <<endl; 

    cout<<     checkPallindrome(word,0) <<endl; 
    if(checkPallindrome(word,0)){
        cout<< "Valid" <<endl; 
    }
    else{
        cout<< "Not valid" <<endl; 
    }
    return 0;
}