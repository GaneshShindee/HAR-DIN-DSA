#include<iostream>
using namespace std;
                  
int main(){
    int arr[5]={1,2,3,4,5};
    int targetSum=7;
    int n=5;
    int triplet =0;
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            for (int k=j+1;j<n;j++){
                if(arr[i]+arr[j]+arr[k]==targetSum){
                    triplet++;

                }
            }
        }
    }
    cout<<triplet <<endl;
    return 0;
}