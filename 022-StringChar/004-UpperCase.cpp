#include<iostream>
#include<string.h>
using namespace std;

void toUpper(char word[],int n){
    for(int i=0;i<n;i++){
        char ch= word[i];
        if(ch>='A' && ch<'Z'){
            continue;
        }
        else{
            
            word[i]=ch-'a'+'A';
        }
    }
    cout<< word <<endl; 
}

void toLower(char word[],int n){
    for(int i=0;i<n;i++){
        char ch =word[i];
        if(ch >='a' && ch<='z'){
            continue;
        }
        else{
            word[i]=ch-'A'+'a';
        }
    }
    cout<< word <<endl; 
}
                  
int main(){
    char word[10]="Ganeshz";
    toUpper(word,strlen(word));
    toLower(word,strlen(word));






    // for(int i=0;i<10;i++){
    //     int position= int(arr[i]);
    //     char ch;
    //     if(position >= 65 && position<= 90){
    //     }
    //     else if(position >= 98 && position<= 122){
    //         ch=position;
    //         arr[i]=ch;

    //     }
    // }

    // cout<< word <<endl; 
    return 0;
}