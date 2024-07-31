#include<iostream>
using namespace std;
                  
int main(){
     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rowt=3;
    int colt=4;
    

    for(int row=0;row<rowt;row++){
        if(row&1){
            for(int col=colt-1;col>=0;col--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int col=0;col<colt;col++){
                cout<<arr[row][col]<<" ";
            }
        }

    }

    return 0;
}