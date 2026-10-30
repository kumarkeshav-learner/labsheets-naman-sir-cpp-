#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char originalString[100], reversedString[100];
    cout << "Enter a string: "; cin.getline(originalString, 100);
    
    strcpy(reversedString, originalString);
    strrev(reversedString); 
    
    cout << "Reversed: " << reversedString << endl;
    
    
    if (strcmp(originalString, reversedString) == 0) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}