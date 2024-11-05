#include <iostream>
#include <vector>
#include <algorithm>

#define N 10 

int main() {
    double array[N];
    
    std::cout << "Введіть " << N << " елементів масиву: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> array[i];
    }
    
    double product_negative = 1; 
    double sum_positive = 0; 
    
    int max_index = 0;
    for (int i = 1; i < N; ++i) {
        if (array[i] > array[max_index]) {
            max_index = i;
        }
    }
    
    bool has_negative = false; 
    for (int i = 0; i < N; ++i) {
        if (array[i] < 0) {
            product_negative *= array[i];
            has_negative = true;
        }
        if (i < max_index && array[i] > 0) {
            sum_positive += array[i];
        }
    }

    if (!has_negative) {
        product_negative = 0;
    }
    
    std::reverse(array, array + N);
    
    std::cout << "Добуток від'ємних елементів: " << product_negative << std::endl;
    std::cout << "Сума додатних елементів перед максимальним: " << sum_positive << std::endl;
    std::cout << "Масив у зворотньому порядку: ";
    for (int i = 0; i < N; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
