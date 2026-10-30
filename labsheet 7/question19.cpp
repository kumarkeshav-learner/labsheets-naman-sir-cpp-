#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[500] = "";
    char word[100];
    int wordCount;
    
    cout << "How many strings to join? "; cin >> wordCount;
    cin.ignore();
    
    
    for(int i = 0; i < wordCount; i++) {
        cout << "Enter string " << (i+1) << ": ";
        cin.getline(word, 100);
        strcat(sentence, word);
        if (i < wordCount - 1) strcat(sentence, " ");
    }
    cout << "Combined Sentence: " << sentence << endl;
    return 0;
}