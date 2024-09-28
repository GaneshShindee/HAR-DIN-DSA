#include<iostream>
using namespace std;

int power(int a,int b){
    if(b==1) return a;

    int ans = a*power(a,--b);
    return ans;

}
                  
int main(){
    int a=2;
    int b=3;
    // cin>>a>>b;
    cout<<     power(a,b) <<endl; 
    return 0;
}