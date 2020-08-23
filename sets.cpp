#include<bits/stdc++.h>
using namespace std;

//sorted order
//insertion, deletion, search in logarithmic time
//all values are distinct (stored as distinct)
//can be either in ascending order or descending order
    //ascending order -> set<int> s;
    //descending order -> std::set<int, std::greater> s;
//in user defined sets we have to include how the comparison will take place for better understanding see
//line no. (18-20)

struct Test{
    int age;
    string name;

    bool operator < (const Test& t) const
    {
        return (this->age < t.age);
    }
};

int main(){

    Test t1 = {15, "Nazmul"}, t2 = {16, "Azraf"}, t3 = {17, "Mezbah"};
    set<struct Test> t;
    t.insert(t1);
    t.insert(t3);
    t.insert(t2);
    set<struct Test>:: iterator it;
    for(it = t.begin() ; it != t.end() ; it++){
        cout<<"Age: "<<(*it).age<<" "<<endl<<"Name: "<<(*it).name<<endl;
    }
}
