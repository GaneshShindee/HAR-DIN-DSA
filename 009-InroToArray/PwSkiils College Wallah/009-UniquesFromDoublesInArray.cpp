#include<iostream>
using namespace std;
                  
int main(){
    int arr[17]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8};
    int n=17;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>-1){
            cout<<arr[i] <<endl;
        }
    }
    // cout<<"hello" <<endl;
    return 0;
}