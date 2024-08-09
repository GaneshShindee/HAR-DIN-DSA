#include<iostream>
using namespace std;

int indexOfLargest(int arr[],int n){
    int largest=INT8_MIN;
    int maxindex;
    for(int i=0;i<n;i++){
        if(arr[i]>largest) {
            largest=arr[i];
            maxindex=i;
        }
    }
    return maxindex;

}
                  
int main(){
    int arr[17]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8};
    int n=17;
    // int largest=INT8_MIN;
    // int secondLargest=INT8_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>largest) {
    //         secondLargest=largest;
    //         largest=arr[i];
    //     }
    // }
    // cout<<secondLargest <<endl;
    // return 0;





    cout<<endl <<endl <<endl;

    int indexOfLargestelement=indexOfLargest(arr,n);
    cout<<indexOfLargestelement <<endl;

    arr[indexOfLargestelement]=-1;
    int indexOfLargestelement=indexOfLargest(arr,n);
    cout<<indexOfLargestelement <<endl;

    // cout<<arr[indexOfLargestelement] <<endl;
}