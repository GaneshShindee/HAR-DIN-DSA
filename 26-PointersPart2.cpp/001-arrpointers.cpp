#include<iostream>
using namespace std;
                  
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int *p= arr;
    cout<< *p <<endl; //first index of array
    cout<<"address of first elemt of array "<< p <<endl; 
    cout<<"address of first element of array "<< arr <<endl; 
    cout<< "address of array of any block "<<&arr[1] <<endl; 
     
    cout<< "value at zeroth location/index"<<*arr <<endl; 
    cout<< "value at 1st index"<<*(arr+1) <<endl; 
    // cout<< *arr[5]<<endl; 



    // formula
    // arr[i]=*(arr+i);
    //i[arr]=*(i+arr)
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    cout<<*(arr+i)<<" "<< &arr[i]<<endl; 
    // cout <<endl; 
    // cout<< <<" "; 
    }
    return 0;
}