#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char textString[100];
    char searchChar;
    cout << "Enter string: "; cin.getline(textString, 100);
    cout << "Enter character to find: "; cin >> searchChar;
    
   
    char *firstOcc = strchr(textString, searchChar);
    if (firstOcc) cout << "First occurrence found at index: " << (firstOcc - textString) << endl;
    else cout << "Character not found." << endl;
    
  
    char *lastOcc = strrchr(textString, searchChar);
    if (lastOcc) cout << "Last occurrence found at index: " << (lastOcc - textString) << endl;
    
    return 0;
}