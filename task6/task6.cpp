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
	int index = str.find_first_of(' ', number);

	// Видаляємо слово із заданим номером
	str.erase(0, index);
	str.erase(index);

	// Виводимо результат
	cout << "Рядок після видалення слова: " << str << endl;

	return 0;
}

