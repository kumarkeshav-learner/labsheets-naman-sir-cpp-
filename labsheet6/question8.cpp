#include <iostream>
using namespace std;
int main() {
    int r, c, m1[10][10], m2[10][10], sum[10][10];
    cout << "Enter rows and cols: "; cin >> r >> c;
    cout << "Enter Matrix 1:\n";
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin >> m1[i][j];
    cout << "Enter Matrix 2:\n";
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin >> m2[i][j];
    cout << "Sum Matrix:\n";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}