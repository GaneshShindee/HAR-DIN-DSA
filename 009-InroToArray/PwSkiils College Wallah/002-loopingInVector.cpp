#include<iostream>
#include<vector>
using namespace std;
                  
int main(){/////
    vector<int> arr;

    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i] << "  ";
    }
    int n=0;
    cout <<endl;
    while(n<arr.size()){
        cout <<arr[n]<< "  ";
        n++;
    }
    return 0;
}