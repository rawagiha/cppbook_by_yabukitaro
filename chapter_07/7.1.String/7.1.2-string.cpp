#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";

    cout << str1[4] << endl;

    str1 += str2;
    cout << str1 << endl;

    cout << (str1 == str2) << endl;
    cout << (str1 == "Hello, World!") << endl;
    cout << str1.compare("Hallo, World!") << endl;
    cout << str1.compare("Hello, Wozld!") << endl;
}
