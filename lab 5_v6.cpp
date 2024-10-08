#include <iostream>
#include <vector>

using namespace std;

// Функція для зміни місцями першого та останнього рядків
void swapFirstLastRows(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        swap(matrix[0][i], matrix[n-1][i]);
    }
}

// Функція для знаходження добутку елементів головної діагоналі
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
    
    // Введення розміру матриці
    cout << "Введіть розмір квадратної матриці: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    // Введення елементів матриці
    cout << "Введіть елементи матриці:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Виведення матриці до змін
    cout << "Початкова матриця:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Зміна місцями першого і останнього рядків
    swapFirstLastRows(matrix);

    // Виведення зміненої матриці
    cout << "Матриця після зміни першого і останнього рядків:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Обчислення добутку елементів головної діагоналі
    int product = productOfDiagonal(matrix);
    cout << "Добуток елементів головної діагоналі: " << product << endl;

    return 0;
}
