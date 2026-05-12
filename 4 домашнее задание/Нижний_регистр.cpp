

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string toLower(string str) { // Функция преобразования строкив нижний регистр

	for (int i = 0; i < str.length(); i++) { // Цикл для перебора всех символов строки

		str[i] = tolower(str[i]); // Функция, преобразующая в нижний регистр
	}

	return str; // Возвращаем str
}

int main() {

	string s = "StRoK"; // Пишем слово для преобразования в нижний регистр

	cout << toLower(s) << " "; // Выводим результат строки

	return 0; // Завершаем программу
}