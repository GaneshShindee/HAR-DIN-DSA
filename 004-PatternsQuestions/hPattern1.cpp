// // #include <iostream>
// // using namespace std;
                  
// // int main(){
// //     int n;
// //     cin>>n;
// //     // int start='A';
    
// //     int start ='A';
// //     int row=1;
// //     while(row<=n){
// //         int col =1;
// //         while(col<=row){
            
// //             char ch=start;
// //             cout<<ch;
// //             start++;
        
            
// //             col++;
// //         }
// //         cout<<endl;
        
// //         // start='A';
// //         row++;
// //     }
// //     return 0;
// // } 

// #include <iostream>
// using namespace std;
                  
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col =1;
//         while(col<=row){
//             int start='A'+n-row+col-1;
//             char ch=start;
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// } 


// #include <iostream>
// using namespace std;
                  
// int main(){
//     int n;
//     cin>>n;
//     // int start='A';
    
//     int start ='A';
//     int row=1;
//     while(row<=n){
//         int col =1;
//         while(col<=row){
            
//             char ch=start;
//             cout<<ch;
//             start++;
        
            
//             col++;
//         }
//         cout<<endl;
        
//         // start='A';
//         row++;
//     }
//     return 0;
// } 

#include <iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

    int row=1;
    
    while(row<=n){
        int col =1;
        char start='A'+n-row;
        while(col<=row){
           
            
            char ch=start;
            cout<<ch;
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
} 