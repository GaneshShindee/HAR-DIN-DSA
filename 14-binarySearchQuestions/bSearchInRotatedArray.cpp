#include<iostream>
using namespace std;

int binarySearch(int arr[],int ss,int ee,int key){
    int s=ss;
    int e=ee;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    return -1;
}

int pivot(int arr[],int n){
    int s= 0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int searchKey(int arr[],int n,int key){
    int pivott=pivot(arr,n);
    if(arr[pivott] <= key && key <=arr[n-1]){
        int ans =binarySearch(arr,pivott,n,key);
        return ans;
    }
    else{
        int ans1= binarySearch(arr,0,pivott-1,key);
        return ans1;
    }
}

                  
int main(){
    int arr[8]={15,16,17,18,19,20,1,2};
    cout<<searchKey(arr,8,16);
    return 0;
}