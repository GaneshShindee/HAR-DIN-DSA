#include<iostream>
using namespace std;


class car{
    public:
        string name;
        string color;

    car(string namee,string colorr){
        color=colorr;      //this for property of that same class
        name=namee;
    }

    car(car &original){
        cout<< "Copying" <<endl; 
        this->name=original.name;
        this->color=original.color;
    }    
};


int main(){
    car c1("maruti","black");
    car c2(c1);
    cout<< c2.name <<endl; 
    cout<< c2.color <<endl; 
    
    return 0;
}