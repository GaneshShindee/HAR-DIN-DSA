#include<iostream>
using namespace std;

void alternateSwap(int arr[],int n){
    if(n%2==1){
         for(int i=0;i<n-1;i++){ 
         swap(arr[i],arr[i++]);        
         }
    }
    else{
        for(int i=0;i<n;i++){ 
        swap(arr[i],arr[i++]);   
        
           }
        }
    }
                  
int main(){
    int n;
    cin>>n;
    int arr[100];
    for( int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }

    alternateSwap(arr,n);
    cout<<endl <<endl;

    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}