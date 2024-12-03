#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    vector<int> v;
    vector<pair<int, int>> p; 
    p.push_back({10, 21});
    p.emplace_back(1, 2);
    v.push_back(2);
    v.push_back(10);
    v.emplace_back(0);
    cout << "Vector p: ";
    for (const auto& pr : p) {
        cout << "(" << pr.first << ", " << pr.second << ") ";
    }
    cout << endl;
    //vector<int> v(2, 50);
    //this will create v with 2 elements both will be 50.
   // vector<int> v(5); //this will contain 5 elements with some garbage value given by the compiler.
    vector<int> v1(2, 50); //v1 has 2 elements each is 50.
    vector<int> v2(v1); //v2 will be a copy of v1.
    cout << "Vector v: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Vector v2: ";
    for (int x : v2) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
