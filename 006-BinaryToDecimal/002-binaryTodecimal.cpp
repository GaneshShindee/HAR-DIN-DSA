#include<iostream>
// #include<math.h>
using namespace std;

                  
int main(){
    int n ;
    cin>>n;
    int i=1;
    int ans=0;

    while(n!=0){
        int bit=n%1;
        if(bit==1){
            ans=ans+(bit * i);
        }
        n=n/10;
        i =i* 10;
        i++;
    }
    cout<<	ans<<endl;
    return 0;
}