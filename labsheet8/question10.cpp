#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
    void inputDetails() {
        cout << "Enter name, roll number, and marks: ";
        cin >> name >> roll_no >> marks;
    }
    void displayDetails() {
        cout << "Name: " << name << ", Roll No: " << roll_no << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}