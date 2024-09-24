#include<iostream>
using namespace std;

void f(int arr[],int size){
    if(size==0 || size==1){
        cout<< "array is sorted"<<endl; 
        return ;
    }
    if(arr[0]>arr[1]){
        cout<< "array is not sorted"<<endl; 
        return ;
    }
    
    f(arr+1,size-1);
    
}                

int main(){
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    f(arr,size);
    return 0;
}