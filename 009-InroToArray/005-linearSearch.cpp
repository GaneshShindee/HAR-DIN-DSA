#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i =0;i<size-1;i++){
        if (key==arr[i]){
            return 1;
            
        }
    }
    return-1;
}
                  
int main(){
    int arr[10]={1,5,23,6,-4,85,12,45,16,46};
    cout<<"enter key" <<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);

    if(found){
        cout<<"element found" <<endl;
    }
    else{
            cout<<"element not found" <<endl;
    }
    return 0;
}