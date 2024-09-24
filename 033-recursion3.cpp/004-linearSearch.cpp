#include<iostream>
using namespace std;

void f(int arr[],int size,int key){
    if(size==0){
        cout<< "key not found" <<endl; 
        return ;
    }

    if(arr[0]==key){
        cout<< "key found" <<endl; 
        return ;
    }
    f(arr+1,size-1,key);
}
                  
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    f(arr,size,8);
    return 0;
}