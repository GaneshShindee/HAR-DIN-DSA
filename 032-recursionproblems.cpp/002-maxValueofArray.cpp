#include<iostream>
using namespace std;

int maxValueofArray(int *arr,int n,int i){
    
    if(i==n-1) return arr[i]; 
    
    return max(arr[i],maxValueofArray(arr,n,i+1));
}
                  
int main(){
    int arr[]={2,6,51,32,65,5,52,7,23,55,65};
    int n =11;
    cout<< maxValueofArray(arr,n,0) <<endl; 
    return 0;
}