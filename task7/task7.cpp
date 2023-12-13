#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>

using namespace std;

bool compareIgnoringSpaces(const std::string& str1, const std::string& str2) {
    std::string str1WithoutSpaces = str1;
    str1WithoutSpaces.erase(std::remove(str1WithoutSpaces.begin(), str1WithoutSpaces.end(), ' '), str1WithoutSpaces.end());

    std::string str2WithoutSpaces = str2;
    str2WithoutSpaces.erase(std::remove(str2WithoutSpaces.begin(), str2WithoutSpaces.end(), ' '), str2WithoutSpaces.end());

    return str1WithoutSpaces == str2WithoutSpaces;
}

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string input1 = "Привіт        Світ";
    std::string input2 = "Привіт Світ";

    if (compareIgnoringSpaces(input1, input2)) {
        std::cout << "Рядки рівні, ігноруючи пробіли." << std::endl;
    }
    else {
        std::cout << "Рядки не рівні, ігноруючи пробіли." << std::endl;
    }

    return 0;
}