#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

string replace_all_occurrences(const string& str, char c) {
    string new_str;
    for (char ch : str) {
        if (ch == c) {
            if (!new_str.empty()) {
                new_str += c;
            }
        }
        else {
            new_str += ch;
        }
    }

    return new_str;
}

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Вводимо рядок
    string str;
    cout << "Введіть рядок: ";
    getline(cin, str);

    // Вводимо символ, який потрібно замінити
    char c;
    cout << "Введіть символ, який потрібно замінити: ";
    cin >> c;

    // Замінюємо всі множинні входження символу c на один
    string new_str = replace_all_occurrences(str, c);

    // Виводимо новий рядок
    cout << "Новий рядок: " << new_str << endl;

    return 0;
}
