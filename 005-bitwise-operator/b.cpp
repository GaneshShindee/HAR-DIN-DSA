#include<iostream>
using namespace std;
int subtractProductAndSum(int n) {

        int pro=1;
        int sum=0;

        while(n!=0){
            sum=sum+(n%10);
            pro= pro*(n%10);
            n=n/10;
        }
        int sub=pro-sum;
        return sub;
    }

int main(){
    cout<<subtractProductAndSum(12);
    
    return 0;
}