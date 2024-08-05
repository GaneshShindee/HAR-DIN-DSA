#include<iostream>
using namespace std;
                  
int main(){
    int n=5;
    // cin>>n;

    // int row=2n-1;
    // while(row){
    //     int col1=row;
    //     while(row){
    //         cout<<"*";
    //         col1--;
    //     }
    //     cout<<endl;
    //     row--;

    // }


    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<	"*";
            
        }
        cout<<endl;
    }
    return 0;
}