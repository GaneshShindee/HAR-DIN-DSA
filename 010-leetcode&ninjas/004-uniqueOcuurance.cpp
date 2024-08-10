#include<iostream>
using namespace std;

bool uniqueNoOccanrance(int arr[],int n){

    
    }

void inputArray(int arr[],int n){
    cout<< "Input size of array: " <<endl; 
    for( int i =0;i<n;i++){
        cout<< "Enter at index:"<<i <<endl; 
        cin>>arr[i];
    }
}   

void printArray(int arr[],int n){
    cout<< "Input Array is: " <<endl; 
    for( int i =0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout <<endl; 
}
                  
int main(){
    int n;
    cin>>n;
    int arr[100];
    inputArray(arr,n);
    printArray(arr,n);

    uniqueNoOccanrance(arr,n);
    cout<<endl <<endl;

    return 0;
}