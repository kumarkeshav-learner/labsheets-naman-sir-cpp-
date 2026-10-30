#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mainString[100], subString[100];
    cout << "Enter main string: "; cin.getline(mainString, 100);
    cout << "Enter sub string: "; cin.getline(subString, 100);
    
   
    char *match = strstr(mainString, subString);
    if (match) {
        cout << "Substring is present at index: " << (match - mainString) << endl;
    } else {
        cout << "Substring is not present." << endl;
    }
    return 0;
}