#include<iostream>
using namespace std;

void print(int *arr,int n,int i){
    if(i==n) return ; 
    cout<< arr[i++]<<" "; 
    print(arr,n,i);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    print(arr,n,0);
    return 0;
}