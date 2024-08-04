#include<iostream>
using namespace std;
                  
int main(){
    int num=2;
    // cin>>num;

    switch (num) {
    case 1 :cout<<	"1"<<endl;
        
        break;
    case 2:cout<<	"char 2"<<endl;
        // continue;
        break;    
    
    default:cout<<	"default"<<endl;
        break;
    }
    return 0;
}