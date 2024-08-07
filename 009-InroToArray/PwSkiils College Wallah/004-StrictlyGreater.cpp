#include<iostream>
#include<vector>
using namespace std;
                  
int main(){
    int x;
    cin>>x;

    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"print array" <<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    int count=0;
    cout<<endl<<"total occurances:- " <<endl;
    for(int i=0;i<v.size();i++){
        if (v[i]>x){
            cout<<v[i]<<" ";
            count++;
        }
    }
        cout<<endl<<"total occurances:- "<< count<<endl;



    return 0;
}