// #include<iostream>
// using namespace std;
                  
// int main(){
//     int n;
//     cin>>n;
//     int start='A';

//     int row=1;
//     while(row<=n){
//         int col =1;
//         while(col<=n){
//             char ch=start+row-1;
//             cout<<ch;
//             start++;
            
//             col++;
//         }
//         cout<<endl;
        
//         start='A';
//         row++;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;
    // int start='A';

    int row=1;
    while(row<=n){
        int col =1;
        while(col<=n){
            int start='A'+row+col-2;
            char ch=start;
            cout<<ch;
            
            col++;
        }
        cout<<endl;
        
        // start='A';
        row++;
    }
    return 0;
}