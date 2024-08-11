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


//first occuance
int a1(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key >arr[mid]){
            s=mid+1;

        }
        else{
            e=mid-1;

        }
        mid=s+(e-s)/2;
    }
    return ans;

    
    }


//last occurance

int a2(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key >arr[mid]){
            s=mid+1;

        }
        else{
            e=mid-1;

        }
        mid=s+(e-s)/2;
    }
    // cout<< ans <<endl; 
    return ans;

    
    }    
                  
int main(){
    int n;
    cout<< "Enter size of array:- " <<endl; 
    cin>>n;
    cout<< "Enter key: " <<endl; 
    int key;
    cin>>key;
    int arr[100];
    inputArray(arr,n);
    printArray(arr,n);

    a1(arr,n,key);
    a2(arr,n,key);

    cout<< " no of occurance "<<a2(arr,n,key)-a1(arr,n,key) +1<<endl; 

    cout<<endl <<endl;

    return 0;
}