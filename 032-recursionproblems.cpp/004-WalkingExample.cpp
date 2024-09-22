#include<iostream>
using namespace std;

void reachHome(int dest ,int src){
    cout<< "Currentl reached at source : "<< src <<endl; 
    if(dest==src){
        cout<< "reached home" <<endl; 
        return ;
    }
    src++;
    reachHome(dest,src);

}
                  
int main(){
    int dest =10;
    int src=1;
    reachHome(dest,src);
    return 0;
}