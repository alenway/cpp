#include<iostream>
#include <utility>
using namespace std;

class Student {
    string name;
    int age;
public:
    Student(string name, const int age) : name(std::move(name)), age(age) {
    }
    void setName(const string &name) {
        this->name = name;
    }
    auto getName() -> string {
        return this->name;
    }
    void setAge(int age) {
        this->age = age;
    }
    auto getAge() const -> int {
        return this->age;
    }
};

auto main() {
    auto student1 = Student("Narendra", 20);
    auto student2 = Student("Ravi", 23);

    cout << student1.getName() << " " << student1.getAge() << '\n';
    cout << student2.getName() << " " << student2.getAge() << '\n';
    return 0;
}