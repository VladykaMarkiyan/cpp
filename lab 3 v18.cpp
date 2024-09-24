#include <iostream>
#include <sstream> 
#include <string>
#include <algorithm> 

std::string cleanWord(const std::string& word) {
    std::string cleanedWord;
    for (char ch : word) {
        if (std::isalpha(ch)) {  
            cleanedWord += ch;
        }
    }
    return cleanedWord;
}

int main() {
    std::string text;
    std::cout << "Введіть ваш текст: ";
    std::getline(std::cin, text);

    std::string longestWord;
    std::string word;

    std::stringstream ss(text);

    while (ss >> word) {
        std::string cleanedWord = cleanWord(word);

        if (cleanedWord.length() > longestWord.length()) {
            longestWord = cleanedWord;
        }
    }

    if (!longestWord.empty()) {
        std::cout << "Найдовше слово: " << longestWord << std::endl;
    } else {
        std::cout << "Не було введено жодного слова." << std::endl;
    }

    return 0;
}
