#include <iostream>
#include <regex>
#include <string>

using namespace std;

regex rx(R"(\d{3}-\d{2,3}-\d{4})");

int main() {
    string str = "my phone number is 231-348-3453. 231-45-2211 is my ssn.";
    
    sregex_iterator it(str.begin(), str.end(), rx);

    sregex_iterator end;

    while (it != end) {
        cout << (it++)->str() << endl;
    }
}
