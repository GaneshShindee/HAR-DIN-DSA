#include<iostream>
using namespace std;

int factorial(int a){
    int fact =1;
    for(int i=1;i<=a;i++){
        fact = fact *i;
    }
    return fact;
}

int ncr(int n,int r){
    int b= n-r;
    int nemo=factorial(n);
    int demo =factorial (r)*factorial(b);
    int ans=nemo/demo;
    return ans;
}
                  
int main(){
    int n ,r;
    cin>>n;
    cin>>r;
    int ncrr=ncr(n,r);
    cout<<ncrr;
    return 0;
}