#include<iostream>
using namespace std;

int f(int arr[],int size){
    if(size==0) return 0;
    if(size==1) return arr[0];
    int ans=arr[0]+f(arr+1,size-1);
    return ans;
}
                  
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< f(arr,size) <<endl; 
    return 0;
}