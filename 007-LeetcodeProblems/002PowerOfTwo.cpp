#include<iostream>
#include<math.h>
using namespace std;
                  
int main(){
    int n;
    cin>>n;
    bool check;

    for(int i=0;i<=30;i++){
        int ans =pow(2,i);
        if(ans==n){
            check=1;
            cout<<	i<<endl;
            break;
        }
        else{
            check=0;
        }
    }
    cout<<	check<<endl;
    if(check==true){
        cout<<	"number is power of 2"<<endl;

    }
    else{
        cout<<	"number is not power of i"<<endl;
    }
    return 0;
}