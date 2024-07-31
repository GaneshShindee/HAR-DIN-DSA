#include<iostream>
using namespace std;

int inputArray(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter index value at "<< i<<" "<<endl;
        cin>>num[i];
    }
    
}


int printArray(int num[],int size){
    cout<<"the array is ";
    for(int i =0;i<size;i++){
        cout<<" " <<num[i]<<" ";
    }
    cout<<endl;
}


int getMin(int num[],int n){
    int mini = INT8_MAX;
    for(int i=0;i<n;i++){

        int mini = min(mini,num[i]);


        // if(num[i]<min){
        //     min =num[i];
        // }
    }
    return mini;
}

int getMax(int num[],int n){
    int maxi = INT8_MIN;
    for(int i=0;i<n;i++){

        int maxi = max(maxi,num[i]);


        // if(num[i]>max){
        //     max =num[i];
        // }
    }
    return maxi;
}


int inputCharArray(char num[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter index value at "<< i<<" "<<endl;
        cin>>num[i];
    }
    
}


int printCharArray(char num[],int size){
    cout<<"the array is ";
    for(int i =0;i<size;i++){
        cout<<" " <<num[i]<<" ";
    }
    cout<<endl;
}
                  
int main(){
    // int size;
    // cout<<"Enter the size of array "<<endl;
    // cin>>size;


    // int num[10];

    // inputArray(num,size);

    // printArray(num,size);

    // cout<<"minimum value is "<<getMin(num,size)<<endl;
    // cout<<"maximum value is "<<getMax(num,size)<<endl;

    // int second[10];
    // inputArray(second,size);
    // printArray(second,size);

    // cout<<"minimum value is "<<getMin(second,size)<<endl;
    // cout<<"maximum value is "<<getMax(second,size)<<endl;


    int third[5]={2,3};
    // cout<<"the array is ";
    // for(int i =0;i<5;i++){
    //     cout<<" " <<third[i]<<" ";
    // }
    // cout<<endl;
    
    printArray(third,5);


    //initilaixing all loactions 0
    int forth[5]={0};
    printArray(forth,5);
    cout<<"Size of forth is "<<sizeof(forth)/sizeof(int)<<endl;


    //initilaixing all loactions 1   not possible with below lines
    int fifth[5]={1};
    printArray(fifth,5);

    int fifthSize=sizeof(fifth)/sizeof(int);
    cout<<"Size of fith is "<<sizeof(fifth)/sizeof(int)<<endl;
    cout<<"Size of fith is "<<fifthSize<<endl;


    // char ch[10];
    // inputCharArray(ch,5);
    // printCharArray(ch,3);
    // printCharArray(ch,8);

    char chh[5]={'a'};
    printCharArray(chh,3);
    printCharArray(chh,5);





    
    return 0;
}