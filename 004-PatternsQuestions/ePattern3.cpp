#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;
    int chh='A';

    int row=1;
    while(row<=n){
        int col =1;
        while(col<=n){
            char ch=chh;
            cout<<ch;
            chh++;
            
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}