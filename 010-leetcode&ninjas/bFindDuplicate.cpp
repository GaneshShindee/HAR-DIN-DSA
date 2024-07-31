#include<iostream>
using namespace std;
int duplicateArray(int arr[],int size){
    int ans=0;
    for(int i =0;i<size;i++){
        ans=ans^arr[i];
    }

    for(int i=0;i<size;i++){
        ans=ans^i;
    }

    return ans;
}
                  
int main(){
    int arr [5]={1,2,3,4,2};
    int answer=duplicateArray(arr,5);
    cout<<answer;
    return 0;
}