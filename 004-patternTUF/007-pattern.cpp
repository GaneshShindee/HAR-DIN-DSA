#include<iostream>
using namespace std;

void pattern(int n){
    int row=1;
    while(row<=n){
       int space=n-row;
       while(space){
        cout<<" ";
        space--;
       }

       int col =row;
       while(col){
        cout<<"*" ;
        col--;
       }
       int col2=row-1;
       while(col2){
        cout<<"*";
        col2--;
       }
        cout <<endl;
        row++;
    }
}

void patternfor(int n){
    for(int row=1;row<=n;row++){
        for(int space=n-row;space!=0;space--){
            cout<<" ";
        }
        for(int col=(2*row)-1;col!=0;col--){
            cout<<"*";
        }
        cout<<endl;
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
        pattern(n)
        patternfor(n);
        }
    
    // cout<< <<endl;
    

    return 0;
}