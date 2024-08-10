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

void a(int arr[],int n,int key){
        int start=0;
        int end=n-1;
        int mid=(start + end)/2;

        while(start<= end){
            if(arr[mid]==key){
                cout<< mid <<endl; 
            }
            if(key<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+end)/2;
        }
    }
                  
int main(){
    int n;
    cout<< "Enter size of array:- " <<endl; 
    cin>>n;
    int key;
    cout<< "Enter key element:-" <<endl; 
    cin>>key;
    int arr[100];
    inputArray(arr,n);
    printArray(arr,n);

    a(arr,n,key);
    cout<<endl <<endl;

    return 0;
}