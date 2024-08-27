// 8.	Write a program to add 2 matrices.
#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 2;

void addMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int mat[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[ROWS][COLS] = {{1, 2},
                            {3, 4}};
    int mat2[ROWS][COLS] = {{5, 6},
                            {7, 8}};
    int result[ROWS][COLS];

    // Adding matrices
    addMatrices(mat1, mat2, result);

    // Displaying matrices
    cout << "Matrix 1:" << endl;
    displayMatrix(mat1);
    cout << endl;

    cout << "Matrix 2:" << endl;
    displayMatrix(mat2);
    cout << endl;

    cout << "Resultant Matrix after addition:" << endl;
    displayMatrix(result);

    return 0;
}
