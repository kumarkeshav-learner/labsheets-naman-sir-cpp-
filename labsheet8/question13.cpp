#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
private:
    float marks;
public:
    void setStudentDetails(string n, int a, float m) {
        setPersonDetails(n, a);
        marks = m;
    }
    void displayAll() {
        cout << "Name: " << name << "\nAge: " << age << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setStudentDetails("Alice", 20, 85.5);
    s.displayAll();
    return 0;
}