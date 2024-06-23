#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int k, int mid){
    int painter=1;
    int boardtime=0;
    for(int i =0;i<n;i++){
        if(boardtime+arr[i]<=mid){
            boardtime=boardtime+arr[i];
        }
        else{
            painter++;
            if(painter>k || arr[i]>mid){
                return false;
            }
            boardtime=arr[i];
        }
    }
    return true;
}

int minimumTime(int arr[],int n,int k){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;

        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
                  
int main(){
    int arr[4]={5,5,5,5};
    cout<<minimumTime(arr,4,2);

    return 0;
}