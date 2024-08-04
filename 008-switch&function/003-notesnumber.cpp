#include<iostream>
using namespace std;
                  
int main(){

    int num;
    cin >> num;


    switch(1){
        case 1:if(num>0){
                 cout<<"100 cha notes "	<<num/100<<endl;
                }
                else{
                    cout<<	"100 cha notes 0"<<endl;
                }
                num=(num%100);
            // break;
        case 2:if(num>50){
                 cout<<	"50 cha notes   "<<num/50<<endl;
  
                }
                else{
                    cout<<	"50 cha notes 0"<<endl;
                }
                num=num%50;
                
        case 3:if(num>20){
                 cout<<"20 cha notess  "<<	num/20<<endl;

                }
                else{
                    cout<<	" 20 cha notes 0"<<endl;
                }
                num=num%20;
                
                
        case 4:if(num>1){
                 cout<<	"1 cha coins  "<<num/1<<endl;
                }
                else{
                    cout<<	"1 cha coins 0"<<endl;
                }         
    }

    return 0;
}