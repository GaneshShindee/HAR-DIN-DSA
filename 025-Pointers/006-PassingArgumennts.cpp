#include<iostream>
using namespace std;

void changeB(int* b){
    *b=200;
    cout<< *b <<endl; 
    //pass by refeance
}

void changeA(int a){
    a=20;
    cout<< a <<endl; 
}
                  
int main(){
    int a =10;
    changeA(a);
    cout<< a <<endl; 
    int b =100;
    changeB(&b);
    cout<< b <<endl; 
    return 0;
}