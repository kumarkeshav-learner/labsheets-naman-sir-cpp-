#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sourceString[100], destString[10] = "";
    cout << "Enter string: "; cin.getline(sourceString, 100);
    
   
    strncpy(destString, sourceString, 5);
    destString[5] = '\0'; 
    
    cout << "First 5 characters: " << destString << endl;
    return 0;
}