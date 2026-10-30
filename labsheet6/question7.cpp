#include <iostream>
using namespace std;
int main() {
    int rows, cols, matrix[10][10];
    cout << "Enter rows and columns: "; cin >> rows >> cols;
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    cout << "Matrix is:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) cout << matrix[i][j] << " ";
        cout << "\n";
    }
    return 0;
}