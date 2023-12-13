#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Вводимо перший рядок
    string str1;
    cout << "Введіть перший рядок: ";
    getline(cin, str1);

    // Вводимо довжину другого рядка
    int length;
    cout << "Введіть довжину другого рядка: ";
    cin >> length;

    // Створюємо другий рядок заданої довжини
    string str2(length, ' ');

    // Копіюємо текст першого рядка в другий
    for (int i = 0; i < str1.length(); i++) {
        str2[i] = str1[i];
    }

    // Доповнюємо другий рядок пробілами до потрібної довжини
    if (length > str1.length()) {
        int spaces_count = length - str1.length();
        for (int i = 0; i < spaces_count; i++) {
            str2[i] = ' ';
        }
    }

    // Розміщуємо текст першого рядка по центру другого рядка
    int spaces_count = (length - str1.length()) / 2;
    for (int i = 0; i < spaces_count; i++) {
        str2[i] = ' ';
    }

    // Виводимо другий рядок
    cout << "Другий рядок: " << str2 << endl;

    return 0;
}
