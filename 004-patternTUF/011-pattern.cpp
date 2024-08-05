#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin >>n;
    // int count=1;
    for(int row=1;row<=n;row++){
        int count=row;
        for(int col=1;col<=row;col++){
            cout<< (count&1 );
            count++;
        }
        cout <<endl;
    }
    return 0;
}