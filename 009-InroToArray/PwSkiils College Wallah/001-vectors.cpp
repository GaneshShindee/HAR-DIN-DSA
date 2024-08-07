#include<iostream>
#include<vector>
using namespace std;
                  
int main(){
    vector<int>arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(1);
    cout <<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(2);
    cout <<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(3);
    cout <<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(4);
    cout <<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(5);
    cout<< endl;;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(6);
    cout <<endl;
    return 0;
}