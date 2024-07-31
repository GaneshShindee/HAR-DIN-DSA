#include<iostream>
using namespace std;

int peakOfMountain(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
                  
int main(){

    int arr[5]={1,2,5,6,9};
    cout<<"happy"<<endl;

    cout<<peakOfMountain(arr,5);

    
    return 0;
}