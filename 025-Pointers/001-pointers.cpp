#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int *p;  //it stores address of another variable
     p  = & i;  //here we have assigned address of variable
    cout << "Address of the variable i is " << p << endl;
    cout << "Address of the pointer p is " << &p;
    return 0;
}