#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string text;
    std::cout << "Введіть текст: ";
    std::getline(std::cin, text);

    std::string longestWord;
    std::string word;

    std::stringstream ss(text);

    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    std::cout << "Найдовше слово з тексту: " << longestWord << std::endl;

    return 0;
}
