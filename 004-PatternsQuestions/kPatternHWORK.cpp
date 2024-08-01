#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int count =n-row+1;
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col++;

        }
        // int count=0;
        int star=row-1;
        while(star){
            cout<<"**";
            star--;
        }

        int col1=n-row+1;
        while(col1){
            cout<<count;
            count--;
            col1--;
        }



       

        cout<<endl;
        row++;
    }
    return 0;
}