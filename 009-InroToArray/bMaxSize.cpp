#include<iostream>
using namespace std;

int update(int num[],int n){
}
                  
int main(){
    int size;
    cin>>size;

    int num[100];

    for (int i = 0; i <size; i++)
    {
        cin>>num[i];
    }

    update(num,5);

    for(int i=0;i<=5;i++){
        cout<<num[i]<<endl;
    }
    
    
    return 0;
}