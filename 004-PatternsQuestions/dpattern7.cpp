#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;


    int row=1;
    while(row<=n){
        int col=1;
        int print=row;

        while(col<=row){
            cout<<print;
            print++;
            col++;
        }
        cout<<endl;
        row++;
        }
    return 0;
}