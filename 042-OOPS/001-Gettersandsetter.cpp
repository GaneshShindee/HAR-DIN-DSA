#include<iostream>
#include<string>
using namespace std;

class student{
private:
    string name;
    float cgpa;

public:
    void getPercentage(){
        cout<< (cgpa*10) <<endl; 
    }


    //setters
    void setName(string nameVal){
        name=nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa=cgpaVal;
    }

    //getters
    string getName(){
        return name;
    }

    float getCgpa(){
        return cgpa;
    }

};
                  
int main(){
    student s1;
    // s1.name="ganesh";
    // s1.cgpa=6;

    // cout<< s1.name <<endl; 
    // cout<< s1.cgpa <<endl; 
    // s1.getPercentage();

    // getter and setter

    s1.setName("Ganesh");
    s1.setCgpa(5.6);

    cout<< s1.getName() <<endl; 
    cout<< s1.getCgpa() <<endl; 


    return 0;
}