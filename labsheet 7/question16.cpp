#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[200];
    int wordCount = 1; 
    cout << "Enter a sentence: "; cin.getline(sentence, 200);
    
    int length = strlen(sentence);
    if (length == 0) wordCount = 0;
    
    
    for (int i = 0; i < length; i++) {
        if (sentence[i] == ' ' && sentence[i+1] != ' ' && sentence[i+1] != '\0') {
            wordCount++;
        }
    }
    cout << "Total words: " << wordCount << endl;
    return 0;
}