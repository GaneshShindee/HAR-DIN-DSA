#include<iostream>
using namespace std;

void printArray(){

}
                  
int main(){
    int arr[5];
    // accessing an array
    cout<<arr[0] <<endl;//garbage value
    cout<<arr[4] <<endl;
    cout<<arr[20] <<endl;
    cout<<arr[256] <<endl;
    cout<<"All good" <<endl;

    int sec[3]={5,7,11};
    int third[5]={5,5,523,562};
    cout<<third[4] <<endl;

    //printing an array
    int n=15;
    for(int i =0;i<=n;i++){
        cout<<third[i] << " ";
    }
    cout <<endl;

    int secc=sizeof(sec)/sizeof(int);
    cout<<secc <<endl;
    return 0;
}