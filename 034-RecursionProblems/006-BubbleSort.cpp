#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<< arr[i] <<" "; 
    }
}
// void bubbleSort(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     printArray(arr,size);
// }

void bubbleSortRec(int arr[],int size){
    if(size==1) return ;
    for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    bubbleSortRec( arr,--size);   
}

                  
int main(){
    int arr[]={1,0,2,6,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    // bubbleSort(arr,size);
    cout <<endl; 
    bubbleSortRec(arr,size);


    printArray(arr,size);
    return 0;
}