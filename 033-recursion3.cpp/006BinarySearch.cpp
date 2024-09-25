#include<iostream>
using namespace std;

bool binarySearch(int arr[],int key,int s,int e){
    if(s>e){
        return false;
    }
    int mid =s+(e-s)/2;
    if(arr[mid]==key){
        return true; 
    }
    
    if(arr[mid]<key){
        return binarySearch(arr,key,mid +1,e);
    }
    else{
        return binarySearch(arr,key,s,mid-1);
    }

}
                  
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key =5;

    cout<< binarySearch(arr,key,0,size-1) <<endl; 
    
    return 0;
}