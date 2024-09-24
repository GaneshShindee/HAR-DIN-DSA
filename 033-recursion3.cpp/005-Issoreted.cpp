#include<iostream>
using namespace std;

bool issorted(int arr[],int size){
    if(size==0 || size ==1) return true;

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int ans = issorted(arr+1,size-1);
        return ans;
    }

}
                  
int main(){
    int arr[]={100,120,230,450,720,813,942,1025};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(issorted(arr,size)){
        cout<< "Array is sorted" <<endl; 
    }
    else{
        cout<< "Array is not sorted" <<endl; 
    }
    
    return 0;
}