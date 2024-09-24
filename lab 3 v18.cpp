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

    bool allWordsSame = true;
    std::string firstWord;
    std::stringstream ss(text);
    bool first = true;

    while (ss >> word) {
        std::string cleanedWord = cleanWord(word);

        if (first) {
            firstWord = cleanedWord;
            longestWord = cleanedWord;
            first = false;
        } else {
            if (cleanedWord != firstWord) {
                allWordsSame = false;
            }
        }

        if (cleanedWord.length() > longestWord.length()) {
            longestWord = cleanedWord;
        }
    }

    if (allWordsSame) {
        std::cout << "Усі введені слова однакові." << std::endl;
    } else {
        std::cout << "Найдовше слово: " << longestWord << std::endl;
    }

    return 0;
}
