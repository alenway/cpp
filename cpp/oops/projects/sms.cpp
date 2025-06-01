#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(const string &name, int age) {
        this->name = name;
        this->age = age;
    }
    void setName(const string &name) {
        this->name = name;
    }
    string getName() {
        return this->name;
    }
    void setAge(int age) {
        this->age = age;
    }
    int getAge() const {
        return this->age;
    }
};

int main() {
    auto s1 = Student("Narendra", 20);
    auto s2 = Student("Ravi", 23);

    cout << s1.getName() << " " << s1.getAge() << endl;
    cout << s2.getName() << " " << s2.getAge() << endl;
    return 0;
}