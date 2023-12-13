#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Вводимо рядок, що містить десяткове число
    string str;
    cout << "Введіть рядок, що містить десяткове число: ";
    getline(cin, str);

    // Зчитуємо десяткове число з рядка
    int number = stoi(str);

    // Перекладаємо десяткове число у шістнадцятиричне представлення
    string hex_number;
    while (number != 0) {
        int digit = number % 16;
        char hex_digit = '0' + digit;
        if (digit >= 10) {
            hex_digit += 'A' - 10;
        }

        hex_number = hex_digit + hex_number;
        number /= 16;
    }

    // Виводимо шістнадцятиричне представлення
    cout << "Шістнадцятиричне представлення числа: " << hex_number << endl;

    return 0;
}


