  #include<iostream>
using namespace std;

void inputArray(int arr[],int n){
    cout<< "Input size of array: " <<endl; 
    for( int i =0;i<n;i++){
        cout<< "Enter at index:"<<i <<endl; 
        cin>>arr[i];
    }
}   

void printArray(int arr[],int n){
    cout<< "Input Array is: " <<endl; 
    for( int i =0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout <<endl<<endl; 
}


//first occuance
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    // cout<<"pivot at index "<< s <<endl; 
    // cout<<"pivot element is: "<< arr[s] <<endl; 
    return s; 
    }

int binarySearch(int arr[],int start,int end,int key){
        int mid=(start + end)/2;

        while(start<= end){
            if(arr[mid]==key){
                cout<<"your target found at index:-"<< mid <<endl; 
            }
            if(key<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return mid;
    }    


       
int main(){
    int n;
    cout<< "Enter size of array:- " <<endl; 
    cin>>n;
    cout<< "Enter key: " <<endl; 
    int key;
    cin>>key;
    int arr[100];
    inputArray(arr,n);
    printArray(arr,n);

    
    // a2(arr,n,key);

    int pivot=getPivot(arr,n);

    if(key>=arr[pivot] && key<=arr[n-1]){
        binarySearch(arr,pivot,n-1,key);
    }
    else{
        binarySearch(arr,0,pivot-1,key);
    }


    cout<<endl <<endl;

    return 0;
}