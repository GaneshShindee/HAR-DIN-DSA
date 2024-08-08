#include<iostream>
using namespace std;
                  
int main(){
    int arr[5]={3,4,6,7,1};
    int n=5;
    int targetsum=7;
    int pairs=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs <<endl;
    return 0;
}