#include <iostream>
#include <algorithm>
#include <iomanip>

struct Student {
    std::string name;
    std::string faculty;
    std::string group;
    int absences;

    Student(std::string n = "", std::string f = "", std::string g = "", int a = 0)
        : name(n), faculty(f), group(g), absences(a) {}
};

bool compareAbsences(const Student &a, const Student &b) {
    return a.absences > b.absences; 
}

int main() {
    const int MAX_STUDENTS = 100; 
    Student students[MAX_STUDENTS]; 
    int numStudents;

    do {
        std::cout << "Введіть кількість студентів (мінімум 10): ";
        std::cin >> numStudents;

        if (numStudents < 10) {
            std::cout << "Помилка: потрібно ввести принаймні 10 студентів.\n";
        }
    } while (numStudents < 10);

    for (int i = 0; i < numStudents; ++i) {
        std::string name, faculty, group;
        int absences;

        std::cout << "Студент #" << (i + 1) << ":\n";
        std::cout << "Введіть ПІБ: ";
        std::cin.ignore(); 
        std::getline(std::cin, name);
        std::cout << "Введіть факультет: ";
        std::getline(std::cin, faculty);
        std::cout << "Введіть групу: ";
        std::getline(std::cin, group);
        std::cout << "Введіть кількість пропусків: ";
        std::cin >> absences;

        students[i] = Student(name, faculty, group, absences);
    }

    std::sort(students, students + numStudents, compareAbsences);

    std::cout << "\nТоп-10 студентів з найбільшою кількістю пропусків:\n";
    for (int i = 0; i < 10 && i < numStudents; ++i) {
        std::cout << students[i].name << " (Факультет: " << students[i].faculty 
                  << ", Група: " << students[i].group 
                  << ", Пропуски: " << students[i].absences << ")\n";
    }

    return 0;
}
