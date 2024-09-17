#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int scalarProduct(const vector<int>& vec1, const vector<int>& vec2) {
    int product = 0;
    for (int i = 0; i < vec1.size(); i++) {
        product += vec1[i] * vec2[i];
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

    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

    cout << "Матриця:" << endl;
    printMatrix(matrix);

    vector<int> firstRow = matrix[0];

    cout << "Добуток першого рядка з іншими рядками:" << endl;
    for (int i = 1; i < rows; i++) {
        int product = scalarProduct(firstRow, matrix[i]);
        cout << "Скалярний добуток першого рядка з рядком " << i + 1 << ": " << product << endl;
    }

    return 0;
}
