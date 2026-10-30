#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char string1[100], string2[100];
    cout << "Enter first string: "; cin.getline(string1, 100);
    cout << "Enter second string: "; cin.getline(string2, 100);
    
    
    int result = strcmp(string1, string2);
    if (result == 0) {
        cout << "Strings are exactly equal." << endl;
    } else if (result < 0) {
        cout << "String 1 is less than String 2." << endl;
    } else {
        cout << "String 1 is greater than String 2." << endl;
    }
    return 0;
}