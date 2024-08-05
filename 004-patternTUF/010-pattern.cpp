#include<iostream>
using namespace std;

void pattern(int n){
    for(int row=1;row<=2*n-1;row++){
        int stars=row;
        if(row>n)stars=2*n-row;
        for(int col=1;col<=stars;col++){
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