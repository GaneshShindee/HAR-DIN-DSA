#include<iostream>
#include<vector>
using namespace std;

string f(string &s,int n,int idx){
    // base case
    if(idx==n) return "";
    string curr="";
    curr=curr+s[idx];
    return ((s[idx]=='a')? "":curr)+f(s,n,idx+1);
}


                  
int main(){
    string s="abcda";
    int n=5;
    // f(s,);
    return 0;
}