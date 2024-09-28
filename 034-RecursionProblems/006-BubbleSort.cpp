#include<iostream>
using namespace std;



void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<< arr[i] <<" "; 
    }
}
void bubbleSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printArray(arr,size);
}
                  
int main(){
    int arr[]={1,0,2,6,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    cout <<endl; 

    printArray(arr,size);
    return 0;
}