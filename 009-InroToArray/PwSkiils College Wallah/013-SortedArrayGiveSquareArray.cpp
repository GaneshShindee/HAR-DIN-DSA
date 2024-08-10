#include<iostream>
#include<vector>
using namespace std;

void squareSorted(vector<int>&v){
    
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