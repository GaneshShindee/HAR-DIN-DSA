#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<< col;
        }

        // space
        int space=n-row;
        while(space){
            cout<<"  ";
            space--;
        }
        int count=row;
        for(int col2=1;col2<=row;col2++){

            cout<< count;
            count--;
        }

        
        cout <<endl;
    }
    return 0;
}