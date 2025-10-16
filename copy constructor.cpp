#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor called" << endl;
    }
    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor called" << endl;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    // Creating object using parameterized constructor
    Student s1("Rahul", 20);
    s1.display();
    // Creating object using copy constructor
    Student s2(s1);   // Copy s1 into s2
    s2.display();
    return 0;
}

