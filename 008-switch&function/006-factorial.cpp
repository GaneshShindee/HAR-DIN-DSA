#include<iostream>
using namespace std;

void factorial(){
    int a,b;
    cout<<	"Enter the n "<<endl;
    cin>>a;
    cout<<	"Enter the r "<<endl;
    cin>>b;
    
    int ans=1;
    for(int i =1;i<=b;i++){
        ans=ans*a;
    }   
    cout<<"power of  "<<a <<" raise to "<<b<<" is "<< ans <<endl;
    return 0;

}
                  
int main(){
     cout<<	"How many factorials do you need: "<<endl;
    int n;
    cin>>n;
    while (n)
    {   
        powerFunction();
        n--;
        
    }
    
    return 0;
}