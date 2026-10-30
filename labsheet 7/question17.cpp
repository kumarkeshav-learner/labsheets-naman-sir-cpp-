#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char inputString[100], resultString[100];
    int j = 0;
    cout << "Enter string: "; cin.getline(inputString, 100);
    
    for (int i = 0; i < strlen(inputString); i++) {
        char c = tolower(inputString[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            resultString[j++] = inputString[i];
        }
    }
    resultString[j] = '\0';
    cout << "String without vowels: " << resultString << endl;
    return 0;
}