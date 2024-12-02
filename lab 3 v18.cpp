#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    cout << "Введіть текст: ";
    getline(cin, text);

    string longestWord;
    string currentWord;
    size_t maxLength = 0; 

    for (char ch : text) {
        if (ch != ' ' && ch != '\t') { 
            currentWord += ch;         
        } else {
            if (!currentWord.empty() && currentWord.length() > maxLength) {
                longestWord = currentWord; 
                maxLength = currentWord.length();
            }
            currentWord.clear(); 
        }
    }

    if (!currentWord.empty() && currentWord.length() > maxLength) {
        longestWord = currentWord;
        maxLength = currentWord.length();
    }

    if (!longestWord.empty()) {
        cout << "Найдовше слово: " << longestWord << "\n";
        cout << "Його довжина: " << maxLength << " символів.\n";
    } else {
        cout << "Текст не містить слів.\n";
    }

    return 0;
}
