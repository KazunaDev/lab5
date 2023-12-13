#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Вводимо рядок
    string str;
    cout << "Введіть рядок: ";
    getline(cin, str);

    // Вводимо номер позиції слова
    int number;
    cout << "Введіть номер позиції слова: ";
    cin >> number;

    // Знаходимо індекс слова із заданим номером
    int index = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            index++;
        }

        if (index == number) {
            return i;
        }
    }