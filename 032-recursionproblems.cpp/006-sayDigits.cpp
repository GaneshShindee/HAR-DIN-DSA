#include<iostream>
using namespace std;

void f(int n){
    string words[10]={"zero","one","two","three","four","five","six","seven","eight","Nine"};
    if(n==0) return ;

    int count = n%10;
    
    n=n/10;

    f(n); 
    cout<< words[count] <<" ";
}
                  
int main(){
    int n ;
    cin>>n;
    f(n);
    return 0;
}