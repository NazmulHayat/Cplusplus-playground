#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    map<T, list<pair<T, int> > > m;

public:
    void addEdge(T u, T v, int dist, bool bidirec = true){

        m[u].push_back(make_pair(v,dist));
        if(bidirec)
        {
            m[v].push_back(make_pair(u, dist));
        }

    }
    void printAdj(){
        for(auto j: m)
        {
            cout<<j.first" - > ";
            for(auto l: j.second)
            {
                cout<<'('<<l.first<<","<<l.second<<')';
            }
            cout<<endl;
        }
    ;}
    void dijsktra(T src){

    }
};



int main(){
    Graph<string> Bangladesh;
    Bangladesh.addEdge("Chittagong", "Dhaka", 10);
    Bangladesh.addEdge("Chittagong", "Comilla", 7);
    Bangladesh.addEdge("Comilla", "Dhaka", 2);
    Bangladesh.addEdge("Dhaka", "Dinajpur", 15);
    Bangladesh.addEdge("Dhaka", "Rajshahi", 8);
    Bangladesh.addEdge("Rajshahi", "Dinajpur", 7);
    Bangladesh.printAdj();
}
