#include<iostream>
using namespace std;

void pattern(int n){
    int row=1;
    while(row<=n){
        int space =1;
        while(space<=row-1){
            cout<<" ";
            space++;
        }
        int col =(2*n)-(2*row)+1;
        while(col){
            cout<<"*" ;
            col--;
        }
        cout <<endl;
        row++;
    }
}
                  
int main(){
    int t=1;
    // cout<<"enter total  test cases " <<endl;
    // cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"enter test case no "<< i<<" " <<endl;
        int n;
        cin>>n;
        pattern(n);}
    
    // cout<< <<endl;
    

    return 0;
}