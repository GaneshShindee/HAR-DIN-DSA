#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int coloum){
    for (int i =0;i<3;i++){
        for (int j=0;j<4;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
        cout<<endl;
    }
    return false;
}


// to pritnt row wise sum
void printSumByRow(int arr[][4],int row,int col){
    
    cout<<"Sum is :- "<<endl;
    for(int row=0;row<3;row++){
    int sum =0;
    for (int col=0;col<4;col++){
        sum =sum+arr[row][col];
        
    }
    
    cout<<sum<<" ";
    }
    cout<<endl;
}
void printSumByCol(int arr[][4],int row,int col){
    int sum =0;
    cout<<"Sum is :- "<<endl;
    for(int col=0;col<3;col++){
    for (int row=0;row<4;row++){
        sum =sum+arr[row][col];
        
    }
    
    cout<<sum<<" ";
}
 cout<<endl;
}

int largestRowSum(int arr[][4],int row ,int col){
    int maxi=INT8_MIN;
    int num=-1;
    for(int row=0;row<3;row++){
    int sum =0;
    for (int col=0;col<4;col++){
        sum =sum+arr[row][col];
        
    }
    
    if(sum>maxi){
        
        maxi=sum;
        num=row;
    }
    }
    cout<<"maximun sum is "<<maxi<<endl;
    return row;

}
int main(){
    int arr1[3][4];
    int arr2[2][2]={{1,2},{3,4}};
    cout<<"enter array: "<<endl;

    //row wise input
    for (int i =0;i<3;i++){
        for (int j=0;j<4;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Your array looks like:--"<<endl;
    // print 
    for (int i =0;i<3;i++){
        for (int j=0;j<4;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    // print arr2
    cout<<"Your second array is:- ";
    for (int i =0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    // searching target
    cout<<endl<<"search for"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr1,target,3,4)){
        cout<<"Target Found";
    }
    else{
        cout<<"Target  Not Found dont know";
    }
    // cout<<"go"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    // hello 
    printSumByRow(arr1,3,4);
    printSumByCol(arr1,3,4);
    cout<<"maximum sum index is "<<largestRowSum(arr1,3,4)<<endl;




     
    //  //coloum wise input
    // for (int i =0;i<4;i++){
    //     for (int j=0;i<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // // print 
    // for (int i =0;i<3;i++){
    //     for (int j=0;i<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // coloum wise input 
    return 0;
}