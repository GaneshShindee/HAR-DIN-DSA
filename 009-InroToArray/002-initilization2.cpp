#include<iostream>
using namespace std;

void printArray(char ch[],int size){
    for(int i=0;i<size-1;i++){
        cout<<ch[i] <<endl;
    }

}
                  
int main(){
    char ch[5]={'a','d'};
    printArray(ch,5);
    return 0;
}