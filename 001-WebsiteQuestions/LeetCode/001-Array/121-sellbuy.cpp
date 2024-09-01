#include<iostream>
#include<vector>
using namespace std;


    int maxProfit(vector<int>& arr) {
        int maxx;
        int maxindex;
        int minn;
        int minnindex;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxx){
                maxx=arr[i];
                maxindex=i;
            }
            if(arr[i]<minn){
                minn=arr[i];
                minnindex=i;
            }
        }
        if(maxindex >= minnindex){
            return maxx-minn;
        }
        else{
            return 0;
        }
        
    }
    int main(){
        vector<int> arr(0);
        arr.push_back(7);
        arr.push_back(1);
        arr.push_back(5);
        arr.push_back(3);
        arr.push_back(6);
        arr.push_back(4);
        for(int i =0;i<arr.size();i++){
            cout<< arr[i] <<" "; 
        }
        
        cout<<maxProfit(arr);
        
    
}


