#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 20; i++) {
        cout << v.capacity() << ", ";
        v.push_back(i);
    }
    cout << endl;
}
