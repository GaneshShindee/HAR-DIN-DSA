#include<iostream>
#include<vector>
using namespace std;
                
int binarySearch(vector<int> &arr,int key,int s,int e){
    if(s>e){
        return -1;
    }
    int mid =s+(e-s)/2;
    if(arr[mid]==key){
        return mid; 
    }
    
    if(arr[mid]<key){
        return binarySearch(arr,key,mid +1,e);
    }
    else{
        return binarySearch(arr,key,s,mid-1);
    }

}
int search(vector<int> &arr, int target) {
    // Write your code here.
    int ans= binarySearch(arr, target, 0, arr.size()-1);
}

  
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    
    for(int i =0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    cout<< "Enter Target" <<endl; 
    int target;
    cin>>target;

    cout<< search(arr,target) <<endl; 

    
    return 0;
}