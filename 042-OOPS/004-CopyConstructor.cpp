#include<iostream>
using namespace std;


class car{
    public:
        string name;
        string color;

    car(string name,string color){
        this->color=color;
        this->name=name;
    }    
};


int main(){
    car c1("maruti","black");
    car c2(c1);
    cout<< c2.name <<endl; 
    cout<< c2.color <<endl; 
    
    return 0;
}