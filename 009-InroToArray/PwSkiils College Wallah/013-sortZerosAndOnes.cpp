#include<iostream>
using namespace std;
                  
int main(){
    int arr[9]={1,0,0,1,0,0,1,0,1};
    int n=9;
    // zero count
    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
    for(int j=count;j<n;j++){
        arr[j]=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}