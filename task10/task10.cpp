#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

string reverse(const string& str) {
    string new_str;
    for (int i = str.length() - 1; i >= 0; i--) {
        new_str += str[i];
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

    // Переписуємо рядок у зворотному порядку
    string new_str = reverse(str);

    // Виводимо новий рядок
    cout << "Рядок у зворотному порядку: " << new_str << endl;

    return 0;
}

