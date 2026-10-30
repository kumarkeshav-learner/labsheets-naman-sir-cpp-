#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char words[5][100], tempWord[100];
    cout << "Enter 5 strings:\n";
    for(int i=0; i<5; i++) cin.getline(words[i], 100);
    
    
    for(int i=0; i<4; i++) {
        for(int j=i+1; j<5; j++) {
            if(strcmp(words[i], words[j]) > 0) {
                strcpy(tempWord, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], tempWord);
            }
        }
    }
    cout << "\nAlphabetical Order:\n";
    for(int i=0; i<5; i++) cout << words[i] << endl;
    return 0;
}