#include<iostream>
using namespace std;

void inputArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}          

int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
// void printArrayType2(int arr[],int n){
//     for(int elements:arr){
//         cout<<elements;
//     }
// }
int main(){
    cout<<"Enter size of array:-" <<endl;

    int n;
    cin>>n;
    int arr[10];
    
    inputArray(arr,n);
    printArray(arr,n);

    //for loop each elememys
    for(int elements:arr){
        cout<<elements<<" ";
    }
    cout <<endl;

    cout<<"sum is "<<(arr,n)<<endl;

    printArray(arr,n);


    return 0;
}