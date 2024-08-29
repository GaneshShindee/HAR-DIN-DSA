#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string str1,string str2){
    if(str1.length()!= str2.length()){
        cout<< "not valid anagram" <<endl; 
        return false;
    }
    int count[26]={0};
    for(char ch: str1){
        count[ch-'a']++;
    }
    for(char ch: str2){
        if(count[ch-'a']==0){
            cout<< "not valid anagram" <<endl; 
            return false;
        }
        count[ch-'a']--;
    }


    cout<< "valid anagram" <<endl; 
    return true;


}
                  
int main(){
    string str1,str2;
    cout<< "enter strings" <<endl; 
    cin>>str1;
    cin>>str2;

    isAnagram(str1,str2);

    return 0;
}