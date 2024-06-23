#include<iostream>
using namespace std;

int firstOccurance(int arr[],int size, int key){
    int start=0,end=size-1;
    int mid =start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;

        }
        else if(arr[mid]>key){
            end=mid-1;

        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        mid =start+(end-start)/2;
    }
    return ans;
}

int lastOccurance(int arr[],int size, int key){
    int start=0,end=size-1;
    int mid =start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;

        }
        else if(arr[mid]>key){
            end=mid-1;

        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        mid =start+(end-start)/2;
    }
    return ans;
}
                  
int main(){

    int arr[7]={0,1,20,20,20,20,100};
    int arrr[8]={2,15,9,6,8,13,25};

    cout<<"is at first index "<<firstOccurance(arr,7,20)<<endl;
    cout<<"is at last index "<<lastOccurance(arr,7,20)<<endl;

    // total no pf lastOccurance
    int total=(lastOccurance(arr,7,20)-firstOccurance(arr,7,20))+1;
    cout<<total;
    
    return 0;
}

