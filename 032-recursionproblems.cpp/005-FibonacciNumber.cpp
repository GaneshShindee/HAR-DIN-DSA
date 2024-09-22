#include<iostream>
using namespace std;
// series = 0 1 1 2 3 5 8 13 21 34 

int fib(int n){
    if(n == 1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
                  
int main(){
    int n;
    cin>> n;
    cout<< fib(n) <<endl; 
    return 0;
}