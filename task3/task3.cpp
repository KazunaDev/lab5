#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str = "Це речення складається з трьох слів";
    char symbol = ' ';

    int index = str.find(symbol);

    if (index != string::npos) {
        // розбиваємо рядок на дві частини
        string first_part = str.substr(0, index);
        string second_part = str.substr(index + 1);

        cout << "Перша частина: " << first_part << endl;
        cout << "Друга частина: " << second_part << endl;
    }

    return 0;
}
