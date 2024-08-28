#include<iostream>
#include<string.h>
using namespace std;

void reverseWord(char word[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(word[s],word[e]);
        s++;
        e--;
    }
    for(;s<e;s++,e--){
        // int temp=word[i];
        // word[j]=word[i];
        // word[i]=temp;
        swap(word[s],word[e]);
    }
    cout<< word <<endl; 
}
                  
int main(){
    char word [7]="Mahesh";
    reverseWord(word,strlen(word));
    return 0;
}