#include<iostream>
// #include<math.h>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    int ans=0;
    int i=0;

    while(n!=0){
        int digit =n%10;
        int ans=((ans*10)+digit);
        // cout<<	ans<<endl;
        n=n/10;
    }
    cout<<	ans<<endl;
    return 0;
}   