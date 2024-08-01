#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;
    // int start='A';

    int row=1;
    while(row<=n){
        int col =1;
        while(col<=row){
            int start='A'+row-1;
            char ch=start;
            cout<<ch;
            
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}