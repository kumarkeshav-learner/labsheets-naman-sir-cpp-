#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sourceString[100], destString[100];
    cout << "Enter source string: ";
    cin.getline(sourceString, 100);
    strcpy(destString, sourceString);
    cout << "Copied string: " << destString << endl;
    return 0;
}