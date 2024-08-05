#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        char a='A'+row-1;
        for(int col=1;col<=row;col++){
            cout<< a;
        }


        
        cout <<endl;
    }
    return 0;
}