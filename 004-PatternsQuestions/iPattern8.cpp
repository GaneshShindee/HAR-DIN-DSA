#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    int row=1;
    int count=1;
    while(row<=n){
        int space= n-row;
        while(space){
            cout<<" ";
            space--;
        }

        int col=row;
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