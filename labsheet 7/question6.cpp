#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstName[100], lastName[100], fullName[200] = "";
    cout << "Enter first name: "; cin.getline(firstName, 100);
    cout << "Enter last name: "; cin.getline(lastName, 100);
    
    
    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    
    cout << "Full Name: " << fullName << endl;
    return 0;
}