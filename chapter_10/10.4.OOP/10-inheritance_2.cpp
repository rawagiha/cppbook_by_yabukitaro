#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& new_name, int new_age) : name(new_name), age(new_age) {}
    
    void eat() { std::cout << name << ": eat()\n"; }
    void show() { std::cout << name << " (" << age << ")\n"; }
};

class Student : public Person {
    int id;
public:
    Student(const std::string& new_name, int new_age, int new_id) : Person(new_name, new_age), id(new_id) {}
    void study() { std::cout << name << " (id:" << id  << "): study()\n"; }
    void change_name(const std::string& yet_another_name) { name = yet_another_name; }
};

int main() {
    Student hanako("Hanako", 5, 87);
    hanako.show();
    hanako.eat();
    hanako.study();

    Person nahako("Nahako", 8);
    nahako.eat();
    nahako.show();

    hanako.change_name("aaa");
    hanako.study();
}
