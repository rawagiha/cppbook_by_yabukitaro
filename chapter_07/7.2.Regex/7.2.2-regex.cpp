#include <iostream>
#include <regex>

using namespace std;

int main() {
    regex rx(R"(\d{3}-\d{4})");

    string zip = "132-4576";
    if (regex_match(zip, rx)) cout << "OK\n";
    else cout << "doesn't match\n";
}
