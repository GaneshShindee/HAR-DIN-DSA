#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int count=row;
        int space= row-1;
        while(space){
            cout<<" ";
            space--;
        }

        int col=n-row+1;
        while(col){
            cout<<count;
            count++;
            col--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}