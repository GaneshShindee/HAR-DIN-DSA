#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        char a='A';
        for(int col=(n-row+1);col!=0;col--){
            cout<< a;
            a++;
        }
        cout <<endl;
    }
    return 0;
}