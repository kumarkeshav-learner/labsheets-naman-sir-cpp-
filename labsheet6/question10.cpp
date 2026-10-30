#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2, m1[10][10], m2[10][10], mult[10][10] = {0};
    cout << "Enter rows/cols for Matrix 1: "; cin >> r1 >> c1;
    cout << "Enter rows/cols for Matrix 2: "; cin >> r2 >> c2;
    if(c1 != r2) { cout << "Multiplication not possible."; return 0; }
    cout << "Enter Matrix 1:\n";
    for(int i=0; i<r1; i++) for(int j=0; j<c1; j++) cin >> m1[i][j];
    cout << "Enter Matrix 2:\n";
    for(int i=0; i<r2; i++) for(int j=0; j<c2; j++) cin >> m2[i][j];
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            for(int k=0; k<c1; k++)
                mult[i][j] += m1[i][k] * m2[k][j];
    cout << "Product Matrix:\n";
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) cout << mult[i][j] << " ";
        cout << "\n";
    }
    return 0;
}