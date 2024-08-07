#include<iostream>
#include<vector>
using namespace std;

void inputVector()
                  
int main(){
    int x;
    cin>>x;
    vector<int> arr(6);

    int occurances=0;
    for(int ele:arr){
        if(ele==x){
            occurances++;
        }
    }
    cout<<occurances <<endl;
    return 0;
}