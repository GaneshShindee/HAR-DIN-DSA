#include<iostream>
using namespace std;

void pattern(int n){
    int row=1;
    while(row<=n){
        int count=1;
        int col =n-row+1;
        while(col){
            cout<<count ;
            count++;
            col--;
        }
        count=1;
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