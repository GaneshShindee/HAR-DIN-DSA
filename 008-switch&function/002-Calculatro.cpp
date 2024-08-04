#include<iostream>
using namespace std;
                  
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    char operation;
    cin >> operation;

    switch(operation){
        case '+':cout<<	a+b<<endl;
            break;
        case '-':cout<<	a-b<<endl;
            break;
        case '*':cout<<	a*b<<endl;
            break;
        case '/':cout<<	a/b<<endl;
            break;            
        default :cout<<	"Not valid operation"<<endl;     
    }

    return 0;
}