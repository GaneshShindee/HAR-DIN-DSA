#include<iostream>
#include<vector>
using namespace std;

void sortZeroAndOnes(vector<int>&v){
    for(int i=0;i<v.size();i++){
        if(v[i]%2==1){
            for(int j=i;j<v.size();j++){
                if(v[j]%2==0){
                    swap(v[j],v[i]);
                }
            }
        }
    }
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