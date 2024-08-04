#include<iostream>
using namespace std;

int powerFunction(){
    int a,b;
    cout<<	"Enter the base "<<endl;
    cin>>a;
    cout<<	"Enter the power "<<endl;

    cin>>b;
    
    int ans=1;
    for(int i =1;i<=b;i++){
        ans=ans*a;
    }   
    cout<<"power of  "<<a <<" raise to "<<b<<" is "<< ans <<endl;
    return 0;
}
                  
int main(){
    cout<<	"How many powers do you need: "<<endl;
    int n;
    cin>>n;
    while (n)
    {   
        powerFunction();
        n--;
        
    }
     return 0;
}