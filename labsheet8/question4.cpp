#include <iostream>
using namespace std;

void copyString(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char source[] = "Hello World";
    char destination[50];
    copyString(destination, source);
    cout << "Copied string: " << destination << endl;
    return 0;
}