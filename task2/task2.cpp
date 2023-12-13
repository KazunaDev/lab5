#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str = "Це речення складається з трьох слів";
    int index = str.find(' ');

    if (index != string::npos) {
        // видаляємо перше слово
        str.erase(0, index);
    }

    cout << str << endl;

    return 0;
}

