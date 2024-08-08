#include<iostream>
using namespace std;
void inputArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<"enter at index : "<<i <<endl;
        cin>>arr[i];
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<< " ";
    }

}

void diffBetnSumofEvenToSumOfOdd(int arr[],int n){
    // int sumOdd=0;
    // int sumEven=0;
    int anssum=0;
    for(int i=0;i<n;i++){
        if((arr[i]&1)){
            // sumOdd=sumOdd+arr[i];
             anssum-=arr[i];
        }
        else{
            // sumEven=sumEven+arr[i];
            anssum+=arr[i];
        }

    }
    // cout<<endl<<"diffrence is == "<<sumEven-sumOdd <<endl;
    cout<<endl<<"diff is == "<<anssum <<endl;
}
                  
int main(){
    int arr[100];
    int n;
    cout<<"enter size of array:-" <<endl;
    cin>>n;
    inputArray(arr,n);
    printArray(arr,n);

    diffBetnSumofEvenToSumOfOdd(arr,n);



    return 0;
}   