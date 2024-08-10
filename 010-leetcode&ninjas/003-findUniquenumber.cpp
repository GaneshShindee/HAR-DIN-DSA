#include<iostream>
using namespace std;

void inputArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl; 
}

void UniqueElement(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<< ans <<endl; 
}
                  
int main(){
    int n;
    cin>>n;
    int arr[100];

    inputArray(arr,n);
    printArray(arr,n);
    UniqueElement(arr,n);


    return 0;
}