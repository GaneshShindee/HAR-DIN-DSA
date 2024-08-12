#include<iostream>
using namespace std;

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
    cout <<endl<<endl; 
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        // int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    } 
}

void selectionSortShraddha(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }            
        }
        swap(arr[i],arr[minIndex]);
    }
    
    }    
                  
int main(){
    int n;
    cout<< "Enter size of array:- " <<endl; 
    cin>>n;
    int arr[100];
    inputArray(arr,n);
    printArray(arr,n);

    selectionSort(arr,n);
    cout<< endl <<endl; 
    printArray(arr,n) ;

    return 0;
}