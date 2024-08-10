#include<iostream>
using namespace std;

// /wrong 

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

void findDuplicate(int arr[],int n){
    int addupton=0;
    for(int i =0;i<n;i++){
        addupton=addupton+i;
    }
    int arradd=0;
    for(int i=0;i<n;i++){
        arradd =arradd+arr[i];

    }
    int duplicate=addupton-arradd;
    cout<< abs(duplicate) <<endl; 

    
    }
                  
int main(){
    int n;
    cin>>n;
    int arr[100];
    inputArray(arr,n);
    printArray(arr,n);

    findDuplicate(arr,n);
    cout<<endl <<endl;

    return 0;
}