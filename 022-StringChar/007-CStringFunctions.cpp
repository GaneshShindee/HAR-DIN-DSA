#include<iostream>
#include<cstring>
using namespace std;
                  
int main(){
    char word[]="hello word";
    char word2[20];
    // word="ganesh shinde";
    strcpy(word2,"ganesh dhinde");
    cout<< word <<endl; 
    cout<< word2 <<endl; 

    cout<< endl<<"Example second" <<endl; 

    char str1[100];
    char str2[]="ganesj ";
    strcpy(str1,str2);
    cout<< str1 <<endl; 


    cout<< endl<<" second function" <<endl; 


    char str3[]="Ganesh";
    char str4[]=" Shinde ";
    // strcat(str3,str4);
    cout<< strcat(str3,str4) <<endl; 


    cout<< endl<<" third function" <<endl<< endl; 

    char str5[]="G";
    char str6[]="A";
    cout<< strcmp(str5,str6) <<endl; 



    

    return 0;
}