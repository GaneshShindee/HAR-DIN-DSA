#include<iostream>
using namespace std;
                  

void update(int arr[],int size){
    cout<<"inside"<<endl; 
    arr[1]= 120; ///main array is updated



    cout<<"back to main"<<endl;

}

void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[3]={1,5,45};

    update(arr,3);

    printArray(arr,3);
    return 0;
}