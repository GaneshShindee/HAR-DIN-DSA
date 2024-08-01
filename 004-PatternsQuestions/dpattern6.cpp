#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    int row=1;
    int seq=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            /* code */
            cout<<seq<< " ";
            col++;
            seq++;

        }
        cout<<endl;
        row++;
        
    }
    
    return 0;
}