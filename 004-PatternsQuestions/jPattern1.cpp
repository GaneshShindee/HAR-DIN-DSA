#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int space1=n-row;
        while(space1){
            cout<<" ";
            space1--;
        }

        int col1 =1;
        while(col1<=row){
            cout<<col1;
            col1++;
        }

        int col=row-1;
        while(col){
            cout<<col;
            col--;
        }

    cout<<endl;
    row++;    
    }
    
    return 0;
}