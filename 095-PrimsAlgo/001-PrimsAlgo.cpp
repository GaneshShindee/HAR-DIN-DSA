#include<iostream>
#include<vector>
#include<queue>
#include<list>

using namespace std;
                  
class Graph{
    int v;
    list<pair<int,int>> * l;   
    bool isUnder;

public:
    Graph(int v,bool isUnder=true ){
        this->v=v;
        l=new list <pair<int,int>> [v];
        this->isUnder=isUnder;
    }  

    void addEdge(int u,int v,int wt){  //u---v
        l[u].push_back(make_pair(v,wt));
        if(isUnder)
            l[v].push_back(make_pair(v,wt));
    }  

    void primAlgo(int src){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        //build min heap

        vector <bool>mst(v,false);

        pq.push(make_pair(0,src));
        int ans=0;
        

        pq.push(make_pair(0,src));
        while(pq.size()>0){
            int u=pq.top().second;
            int wt=pq.top().first;
            pq.pop();
            if(!mst[u]){
                mst[u]=true;
                ans+=wt;
                list<pair<int,int>> neighbors =l[u];
                for(pair<int,int> n :neighbors){
                    pq.push(make_pair(n.second,n.first));
                }
            }

        }
        cout<< "Final Mst is : "<<ans <<endl; 
    }
};

int main(){
    Graph graph(4);

    graph.addEdge(0,1,10);
    graph.addEdge(0,2,15);
    graph.addEdge(0,3,30);
    graph.addEdge(1,3,40);
    graph.addEdge(3,2,50);
    graph.primAlgo(0);


}