#include<iostream>
#include<map>
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
           
        unordered_map<T,int> dist;
        
        //Set all distance to infinity
        for(auto j:m){
            dist[j.first] = INT_MAX;
        }
        
        //Make a set to find a out node with the minimum distance
        set<pair<int, T> > s;
        
        dist[src] = 0;
        s.insert(make_pair(0,src));
        
        while(!s.empty()){
            
            //Find the pair at the front.
            auto p =   *(s.begin());
            T node = p.second;
            
            int nodeDist = p.first;
            s.erase(s.begin());
            
            
            //Iterate over neighbours/children of the current node
            for(auto childPair: m[node]){
                
                if(nodeDist + childPair.second < dist[childPair.first]){
                    
                    
                    //In the set updation of a particular is not possible
                    // we have to remove the old pair, and insert the new pair to simulation updation
                    T dest = childPair.first;
                    auto f = s.find( make_pair(dist[dest],dest));
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    
                    //Insert the new pair
                    dist[dest] = nodeDist + childPair.second;
                    s.insert(make_pair(dist[dest],dest));
                    
                }
                
            }
        }
        //Lets print distance to all other node from src
        for(auto d:dist){
            
            cout<<d.first<<" is located at distance of  "<<d.second<<endl;
        }
        
        
    }

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
