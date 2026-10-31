#include <iostream>
using namespace std;

const int SIZE = 2;

void addMatrices(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int mat1[SIZE][SIZE] = {{1, 2}, {3, 4}};
    int mat2[SIZE][SIZE] = {{5, 6}, {7, 8}};
    int result[SIZE][SIZE];
    
    addMatrices(mat1, mat2, result);
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}