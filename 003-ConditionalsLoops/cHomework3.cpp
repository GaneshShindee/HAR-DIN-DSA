#include<iostream>
using namespace std;
                  
int main(){
    // char a;
    // cin>>a;
    // int b= a;
    // if( b>=97 && b<=122){
    //     cout<<"lower case";
    // }
    // else if(b>=65 && b<=90){
    //     cout<<"Upper case";

    // }
    // else if(b>=1 && b<=9){
    //     cout<<"number";
    // }

    char inputChar;
    
    cout << "Enter a character: ";
    cin >> inputChar;
    
    if (islower(inputChar)) {
        cout << "The character is lowercase: " << inputChar << endl;
    } else if (isupper(inputChar)) {
        cout << "The character is uppercase: " << inputChar << endl;
    } else {
        cout << "The character is neither lowercase nor uppercase." << endl;
    }

    
    return 0;
}