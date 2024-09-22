#include<iostream>
using namespace std;

int sumofArray(int arr[],int n,int idx){
     // base case
     if(idx==n-1){
        return arr[idx];
     }

    // assumption 
    int sum=arr[idx]+sumofArray(arr,n,idx+1);
    // selfwork 
    return sum;
}
                  
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    cout<< sumofArray(arr,n,0) <<endl; 
   
    return 0;
}