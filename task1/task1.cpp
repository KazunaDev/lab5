#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str = "Це речення складається з трьох слів";
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    cout << "Кількість слів у рядку: " << count << endl;

    return 0;
}
