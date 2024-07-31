#include<iostream>
using namespace std;
                  
int main(){
    int size;
    cout<<"Enter The Size of array: ";
    cin>>size;

    int arr[10];
    for (int i = 0;i<size;i++){
        cout<<"Enter the index value of  "<< i <<" : ";
        cin>>arr[i];
    }
    cout<<"Input array is: ";
    for (int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int sum = 0;
    cout<<endl;
    for (int i=0;i<size;i++){
        sum = sum+arr[i];
    }
    cout<<"THE SUM IS "<<sum<<endl;
    return 0;
}