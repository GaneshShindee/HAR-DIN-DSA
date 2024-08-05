#include<iostream>
using namespace std;

void pattern(int n){
    for(int row=1;row<=2*n;row++){
        
        for(int space=1;space<=n-row+1;space++){
            cout<<" ";
        }
        for(int col=1;col<=2*row-1;col++){
            cout<<"*" ;
        }
        

        cout <<endl;
    }
}
                  
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}