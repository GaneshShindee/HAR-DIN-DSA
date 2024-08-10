#include<iostream>
#include<vector>
using namespace std;

void squareSorted(vector<int>&v){
    for(int i=0;i<v.size();i++){
        int ele=v[i];
        v[i]=ele*ele;
    }
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
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
    squareSorted(v);

    
    for(int i=0;i<n;i++){
        cout<< v[i]<<" ";
    }

    
    return 0;
}