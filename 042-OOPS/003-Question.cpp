#include<iostream>
using namespace std;
                  
class user{
    int id;
    string password;
public:
    int username;
    user(int id){
        this->id=id;
    }    
    void setPassword(string passwordtype){
        password=passwordtype;
    }
    string getPassword(){
        return password;
    }
};


int main(){
    user u1(12);
    u1.setPassword("ganesh");
    cout<< u1.getPassword() <<endl; 
    
    return 0;
}