#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int scalarProduct(int* row1, int* row2, int cols) {
    int product = 0;
    for (int i = 0; i < cols; i++) {
        product += row1[i] * row2[i];
    }
    return product;
}

int main() {
    srand(time(0));

    int rows, cols;
    cout << "Кількість рядків: ";
    cin >> rows;
    cout << "Кількість стовпців: ";
    cin >> cols;

    // Виділення пам'яті для динамічного двовимірного масиву
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Заповнення матриці випадковими числами
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

    cout << "Матриця:" << endl;
    printMatrix(matrix, rows, cols);

    int* firstRow = matrix[0];

    cout << "Добуток першого рядка з іншими рядками:" << endl;
    for (int i = 1; i < rows; i++) {
        int product = scalarProduct(firstRow, matrix[i], cols);
        cout << "Скалярний добуток першого рядка з рядком " << i + 1 << ": " << product << endl;
    }

    // Звільнення пам'яті
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

