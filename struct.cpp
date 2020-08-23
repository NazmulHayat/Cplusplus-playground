#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
    string label;
};

double distance(Point p, Point q) {
    double dx = p.x - q.x;
    double dy = p.y - q.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {

    int arr[4] = {5,2,3,4};
    int s = sizeof(arr)/ sizeof(arr[0]);
    cout<<s;

}
