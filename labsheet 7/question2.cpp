#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char inputString[100];
    int vowelCount = 0;
    cout << "Enter string: ";
    cin.getline(inputString, 100);
    
    
    for (int i = 0; i < strlen(inputString); i++) {
        char c = tolower(inputString[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }
    cout << "Vowels: " << vowelCount << endl;
    return 0;
}