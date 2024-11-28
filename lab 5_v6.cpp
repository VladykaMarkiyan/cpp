#include <iostream>

using namespace std;

void swapFirstLastRows(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        swap(matrix[0][i], matrix[n - 1][i]);
    }
}

int productOfDiagonal(int matrix[][100], int n) {
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= matrix[i][i];
    }
    return product;
}

int main() {
    int n;

    cout << "Введіть розмір квадратної матриці: ";
    cin >> n;

    int matrix[100][100]; 

    cout << "Введіть елементи матриці:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Початкова матриця:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    swapFirstLastRows(matrix, n);

    cout << "Матриця після зміни першого і останнього рядків:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int product = productOfDiagonal(matrix, n);
    cout << "Добуток елементів головної діагоналі: " << product << endl;

    return 0;
}
