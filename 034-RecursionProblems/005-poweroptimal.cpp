#include<iostream>
using namespace std;

int power(int a,int b){
    if(b==1) return a;
    if(b==0) return 1;
    int ans=power(a,b/2);
    if(b/2==0){
        ans=ans*ans;
    }
    else if(b/2!=0){
        ans=ans*ans*a;
    }
    return ans;
}
                  
int main(){
    int a=2;
    int b= 3;
    cout<< power(a,b) <<endl; 
    return 0;
}