#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Using a standard iterator
    cout << "Using standard iterator:\n";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";  // Dereference iterator to access value
    }
    cout << "\n";

    // Using a constant iterator
    cout << "Using constant iterator:\n";
    for (vector<int>::const_iterator it = v.cbegin(); it != v.cend(); ++it) {
        cout << *it << " ";  // Read-only access
    }
    cout << "\n";

    // Using a reverse iterator
    cout << "Using reverse iterator:\n";
    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
    //cout<<v.back()<<" "; Prints the last element.
    cout<<"\n";
    //PRINTING  THE ELEMENTS
    //IN MORE FASTER WAY
    cout<<"MORE FASTER WAY OF PRINTING \n";
    for(auto it=v.begin();it!=v.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
