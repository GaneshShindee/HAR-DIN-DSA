#include<iostream>
using namespace std;
                  

void reverseArray(int arr[],int size){
    int start = 0;
    int end =size-1;

    // while (start<=end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // // }
    // int start=0;
    // int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}   

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
}
int main(){
    int arr[10]={1,5,23,6,-4,85,12,45,16,46};
    // cout<<"enter key" <<endl;
    cout<<reverseArray(arr,10) <<endl;
    printArray(arr,10);
    cout<<"hello" <<endl;
    return 0;
}