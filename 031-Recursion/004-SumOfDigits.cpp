#include<iostream>
using namespace std;

int sumofDigits(int n){
    if(n>=0 && n<=0){
        return n;    
    }
    return (n%10)+sumofDigits(n/10);

}

int main(){
    cout<< sumofDigits(23569) <<endl; 
    cout<< "hello" <<endl; 
    
    return 0;
}