#include<iostream>
#include<fstream>
using namespace std;

class temp{

     id,name,author;
    fstream file;
    public:
    void addBook();
    void showAllBooks();

}
                  
int main(){
    char choice;
    cout<<"--------------------------"<<endl;
    cout<<"     1-Show all Books" <<endl;
    cout<<"     2-Extract Books" <<endl;
    cout<<"     3-Add Books(ADMIN)" <<endl;
    cout<<"     4-EXIT" <<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Enter your choice:-" <<endl;
    cin>>choice;
    switch (choice)
    {
    case '1':
        /* code */
        break;
    case '2':
        cout<<"h" <<endl;
        break;
    case '3':
        /* code */
        break;
    case '4':
        /* code */
        break;        
        
    
    default:
        cout<<"Invalid Choice" <<endl;
        break;
    }
    return 0;
}

void temp ::addBook(){
    cout<<"Enter id:-" <<endl;
    getline(cin,id);
}