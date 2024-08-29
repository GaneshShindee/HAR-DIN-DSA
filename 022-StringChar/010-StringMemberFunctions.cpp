#include<iostream>
#include<string>
using namespace std;
                  
int main(){
    string str ="Ganesh Shinde";
    cout<< str.length() <<endl; 
    cout<< str.at(3) <<endl; 
    cout<<str.substr(0,6)<<endl;
    int c=str.find("s");
    cout<< c <<endl; 
    cout<< str.find("Shinde") <<endl; 
    return 0;
}