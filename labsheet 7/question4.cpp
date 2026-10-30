#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char string1[100], string2[100], tempString[100];
    cout << "Enter first string: "; cin.getline(string1, 100);
    cout << "Enter second string: "; cin.getline(string2, 100);
    
    
    strcpy(tempString, string1);
    if (strcmp(tempString, string2) == 0) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }
    return 0;
}