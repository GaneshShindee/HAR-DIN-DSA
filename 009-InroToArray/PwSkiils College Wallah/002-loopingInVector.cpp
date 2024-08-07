#include<iostream>
#include<vector>
using namespace std;
                  
int main(){/////
    vector<int> arr;

    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    
    int n=0;
    cout <<endl;
    while(n<arr.size()){
        cout <<arr[n]<< "  ";
        n++;
    }
    cout <<endl;

    arr.insert(arr.begin()+2,500);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i] << "  ";
    }


    cout <<endl;
    int targettoget;
    cin>>targettoget;
    int target=-1;
    for(int i =0;i<arr.size();i++)
    {
         if(targettoget==arr[i]){
        target=1;
       }
    }    

    if(target==1){
        cout<<"target found" <<endl;
        break;
    }
    else{
        cout<<"Target Not found" <<endl;
    }

return 0;
}