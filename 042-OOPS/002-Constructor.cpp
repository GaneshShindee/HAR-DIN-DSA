#include<iostream>
using namespace std;


class car{
    string name;
    string color;

public:
// constructor
    car(){

    }

    void start(){
        cout<< "Car has started" <<endl; 
    }
    void stop(){
        cout<< "Car has stopeed" <<endl; 
    }
};



int main(){
    car c1;
    
    return 0;
}