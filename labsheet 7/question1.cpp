#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char inputString[100];
    cout << "Enter string: ";
    cin.getline(inputString, 100);
    
    cout << "Length: " << strlen(inputString) << endl;
    return 0;
}