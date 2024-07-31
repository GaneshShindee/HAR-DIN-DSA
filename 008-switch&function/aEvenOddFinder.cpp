#include<iostream>
using namespace std;

void evenOrOdd(int n){
    if(n%2 == 0){
        cout<<"Number is even";
        // return 1;
    }
    else{
        cout<<"Number is odd";
    }
    // return 0;
}
                  
int main(){
    cout<<"Enter the number:";
    int number;
    cin>>number;
    evenOrOdd(number);
    
    
    return 0;
}