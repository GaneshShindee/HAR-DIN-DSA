#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] <<" "; 
    }
}

void merge(int arr[],int s,int mid,int e){
    vector<int> temp;
    int i=s;
    int j=mid+1;

    while(i<=mid && j<=e){
        if(arr[i] <=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }

    while(j<=e){
        temp.push_back(arr[j++]);
    }

    for(int i=s,x=0;i<=e;i++){
        arr[i]=temp[x++];
    }
}

void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,mid,e);
}                
int main(){
    int arr[10]={5,3,9,2,6,4,8,26,12,1};
    int n=10;
    mergeSort(arr,0,n-1);
    printArray(arr,n);

    return 0;
}