#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;
    bool primecheck;

    for(int i =2;i<n;i++){
        if(n%i==0){
            primecheck=0;
            break;
        }
        else{
            primecheck=1;
        }
    }
    if(primecheck){
        cout<<"its prime number"<<endl;
    }
    else{
        cout<<"its not prime number"<<endl;
    }
    return 0;
}