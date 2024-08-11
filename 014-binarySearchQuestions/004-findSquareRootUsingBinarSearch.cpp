#include<iostream>
using namespace std;


int binarySearch(int n){
    int s =0;
    int e=n;

    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        int element= mid*mid;
        
        if(element==n){
            return mid;
        }
        else if(element>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

} 

// float firstDigit(int n,int part1){
//     // int ans =-1 ;
//     float number=part1;
    
//     while((number*number)<n){
//         number=number+0.1;
//     }
//     return number;
// }

double morePricision(int num,int precision){
    double factor=1;
    double ans=binarySearch(num);
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for (double j= ans;j*j<num;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter Number to find out square root : ";
    cin>>num;
    int part1 =binarySearch(num);
    cout<<"approx square root is : "<<part1<<endl;
    cout<<"More precious : "<<morePricision(num,4);  //4 is upto how many digits
    // cout<<binarySearch(num);
    return 0;
}