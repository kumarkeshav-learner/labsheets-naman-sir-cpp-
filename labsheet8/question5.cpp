#include <iostream>
#include <string>
using namespace std;

int countWords(string str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (c == ' ' || c == '\n' || c == '\t') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

int main() {
    string text = "C++ programming is fun";
    cout << "Number of words: " << countWords(text) << endl;
    return 0;
}