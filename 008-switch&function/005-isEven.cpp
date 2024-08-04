#include<iostream>
using namespace std;

void isEven(){
    int a;
    cout<<	"Enter the number: "<<endl;
    cin>>a;
    if(a%2==0){
        cout<<	"above number is even "<<endl;
    }
    else{   
        cout<<	"above number is odd "<<endl;

    }
}
                  
int main(){
     cout<<	"How many numbers do you want to check: "<<endl;
    int n;
    cin>>n;
    while (n)
    {   
        isEven();
        n--; 
    }
    return 0;
}