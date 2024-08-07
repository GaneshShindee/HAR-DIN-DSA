#include<iostream>
#include<vector>
using namespace std;

void checkSorted(int arr[],int n){
    bool sorted;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i++]){
            sorted=false;
            break;

        }
    }
    if(sorted){
        cout<<"Sorted array" <<endl;
    }
    else{
        cout<<"Array not sorted:-" <<endl;
    }

}

void inputArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<"enter at index : "<<i <<endl;
        cin>>arr[i];
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<< " ";
    }

}
                  
int main(){

    int arr[100];
    int n;
    cout<<"enter size of array:-" <<endl;
    cin>>n;
    inputArray(arr,n);
    printArray(arr,n);
    cout <<endl;
    checkSorted(arr,n);
    
    return 0;
}