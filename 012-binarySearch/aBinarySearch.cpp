#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    // int mid= (start+end)/2;

    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;

        }

        else if(key>arr[mid]){
            start=mid+1;

        }

        else if(key<arr[mid]){
            end=mid-1;
        }
        // mid=(start+end)/2;
        mid=start+(end-start)/2;  //not to go range of int
    }
    return -1;
}
                  
int main(){
    
    int arr[7]={2,3,5,6,8,13,25};
    int arrr[8]={2,15,9,6,8,13,25};

    int index= binarySearch(arr,7,20);
    cout<<"13 is at index "<<index;
    // int arr
    return 0;
}