#include<iostream>
#include<vector>
using namespace std;

void sortZeroAndOnes(vector<int>&v){
    int start=0;
    int end=v.size()-1;

    while(start<end){
        if(v[start]==1 && v[end]==0){
            v[start]=0;
            v[end]=1;
            start++;
            end--;
        }

        if(v[start]==0){
            start++;
        }
        if(v[end]==1){
            end--;
        }
    }
    cout<<"endl" <<endl;
}
                  
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>> ele;
        v.push_back(ele);
    }
    sortZeroAndOnes(v);

    
    for(int i=0;i<n;i++){
        cout<< v[i]<<" ";
    }

    
    return 0;
}