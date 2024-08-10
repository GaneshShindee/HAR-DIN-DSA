#include<iostream>
using namespace std;
//done
void inputArray(int arr[],int n){
    cout<< "Input size of array: " <<endl; 
    for( int i =0;i<n;i++){
        cout<< "Enter at index:"<<i <<endl; 
        cin>>arr[i];
    }
}   

void printArray(int arr[],int n){
    cout<< "Input Array is: " <<endl; 
    for( int i =0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout <<endl<<endl; 
}

void findDuplicate(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    cout<< arr[i] <<endl; 
                    cout<< i <<endl; 
                }  
            }
        }
    }
                  
int main(){
    int n;
    cout<< "Enter size of array:- " <<endl; 
    cin>>n;
    int arr[100];
    inputArray(arr,n);
    printArray(arr,n);

    findDuplicate(arr,n);
    cout<<endl <<endl;

    return 0;
}