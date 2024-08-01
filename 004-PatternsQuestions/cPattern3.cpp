#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    int seq=1;
    int row=1;
    while(row<=n){
        int col =1;
        while(col<=n){
            cout<<seq;
            seq++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}