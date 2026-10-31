#include <iostream>
using namespace std;

const int MAX = 3;

int sumOfDiagonals(int mat[][MAX], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i]; 
        if (i != n - 1 - i) {
            sum += mat[i][n - 1 - i]; 
        }
    }
    return sum;
}

int main() {
    int mat[MAX][MAX] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Sum of diagonals: " << sumOfDiagonals(mat, MAX) << endl;
    return 0;
}