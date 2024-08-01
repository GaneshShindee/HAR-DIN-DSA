#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    // int row=1;
    // while(row<=n){
    //     int col=1;
    //      int seq = row;
    //     while(col<=row){
    //         cout<<seq;
    //         seq--;
    //         col++;
            
    //     }
    //     cout<<endl;
    //     row++;
    // }

    int row=1;
    while(row<=n){
        int col=1;
        //  int seq = row;
        while(col<=row){
            cout<<row-col+1;
            // seq--;
            col++;
            
        }
        cout<<endl;
        row++;
    }



    return 0;
}