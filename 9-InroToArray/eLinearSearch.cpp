#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<=size;i++){
        if(arr[i]==key){
            return 1;
        }

    }
    return 0;
}
                  
int main(){
    int arr[5]={1,2,-45,23,45};
    

    int key;
    cout<<"Enter the key ";
    cin>>key;

    bool found=search(arr,5,key);

    if(found){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }

    return 0;
}