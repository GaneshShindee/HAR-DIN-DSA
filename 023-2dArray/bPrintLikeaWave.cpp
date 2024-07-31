#include<iostream>
using namespace std;
                  
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rowt=3;
    int colt=4;

    // print like this
    // 1 5 9 10 6 2 3 7 11 12 8 4 
    for(int col=0;col<colt;col++){
        if(col & 1){
            // odd-->>bottom to top
            for(int row=rowt-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }

        }
        else{
            for(int row=0;row<rowt;row++){
                cout<<arr[row][col]<<" ";
            }

        }
    }
    return 0;
}