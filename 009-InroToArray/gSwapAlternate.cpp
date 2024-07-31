#include<iostream>
using namespace std;

void swapp(int arr[],int size){

    for(int i=0;i<(size);i++){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
        i++;

    }
}
                  
int main(){
    int arr[6]={1,2,3,4,5,6};

    int odd[5]={1,2,3,4,5};

    swapp(arr,6);
    for (int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"for odd :"<<endl;
    swapp(odd,5);
    for (int i=0;i<5;i++){
        cout<<odd[i]<<" ";
    }


    return 0;
}