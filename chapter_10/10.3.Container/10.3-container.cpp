#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Person {
    public:
        std::string name;
        int age;
        
        Person() = default;
        Person(const std::string& new_name, int new_age) : name(new_name), age(new_age) {}

        bool operator == (const Person& p) const {
            return name == p.name && age == p.age;
        }
        
};


bool operator < (const Person& lhs, const Person& rhs) {
    return lhs.name < rhs.name;
}

int main() {
    std::vector<Person> five_people(5);

    std::vector<Person> people;

    Person kiyoshi("cKiyoshi", 2);
    people.push_back(kiyoshi);
    people.emplace_back("bNoriko", 4);
    people.emplace_back("aTsuyoshi", 6);

    sort(people.begin(), people.end());
    for (auto& p : people) std::cout << p.name << ", ";
    std::cout << std::endl;
}
