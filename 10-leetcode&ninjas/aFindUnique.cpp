// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.

//  Note:
// Unique element is always present in the array/list according to the given condition.


#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
    int answer =0;
    for(int i=0;i<size;i++){
        answer=answer^arr[i];
    }
    return answer;
}
                  
int main(){
    int arr[5]={1,2,1,2,4};
    int ans=findUnique(arr,5);
    cout<<ans<<endl;
    
    return 0;
}