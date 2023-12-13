#include <iostream>
#include <string>
#include <algorithm>
#include <vector>  // Додайте вектор для використання std::vector
#include <Windows.h>

using namespace std;

// Прототип функції split
vector<string> split(const string& str, char delimiter);

int get_word_length(const string& str, int word_number) {
    // Розбиваємо рядок на слова
    vector<string> words = split(str, ' ');

    // Знаходимо слово з номером, заданим користувачем
    if (word_number < 0 || word_number >= words.size()) {
        return -1;
    }

    // Повертаємо довжину цього слова
    return words[word_number].length();
}

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Вводимо рядок
    string str;
    cout << "Введіть рядок: ";
    getline(cin, str);

    // Вводимо номер слова
    int word_number;
    cout << "Введіть номер слова: ";
    cin >> word_number;

    // Визначаємо довжину слова
    int length = get_word_length(str, word_number);

    // Виводимо довжину слова
    if (length == -1) {
        cout << "Немає слова з таким номером" << endl;
    }
    else {
        cout << "Довжина слова: " << length << endl;
    }

    return 0;
}

// Функція для розбиття рядка на слова
vector<string> split(const string& str, char delimiter) {
    vector<string> words;
    string word;
    for (char ch : str) {
        if (ch != delimiter) {
            word += ch;
        }
        else if (!word.empty()) {
            words.push_back(word);
            word.clear();
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}
