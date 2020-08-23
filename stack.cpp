#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (!s.empty()) {
        int t = s.top();
        s.pop();
        cout << t << "\n";
    }
}