#include <iostream>
#include <vector>

using namespace std;

void swapFirstLastRows(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        swap(matrix[0][i], matrix[n-1][i]);
    }
}

int productOfDiagonal(const vector<vector<int>>& matrix) {
    int n = matrix.size();
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

    vector<vector<int>> matrix(n, vector<int>(n));

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

    swapFirstLastRows(matrix);

    cout << "Матриця після зміни першого і останнього рядків:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int product = productOfDiagonal(matrix);
    cout << "Добуток елементів головної діагоналі: " << product << endl;

    return 0;
}
