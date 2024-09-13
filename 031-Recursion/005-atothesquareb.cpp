#include<iostream>
using namespace std;

int square(int a, int b){
    if(b==2){
        return a*a;
    }  
    return a*square(a,b-1);
}
                  
int main(){
    int a,b;
    cin>>a>>b;

    cout<< square(a,b) <<endl; 
    return 0;
}