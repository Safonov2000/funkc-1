

#include <iostream>

using namespace std;

char cravnennumber(int a, int b) { // Функция cravnennumber, переменные a,b

	if (a > b) { // Если а больше б

		return '>'; // Возвращаем знак больше
	}
	else if (a < b) { // Если a меньше б

		return '<'; // Возвращаем меньше
	}
	else { // Иначе

		return '='; // Возвращаем пробел
	}
}

int main() {

	int x = 15; int y = 20; // Записываем значение в переменные x, y

	char result = cravnennumber(x, y); // Создаем переменную result вписываем Имя функции cravnennumber

	cout << x << " " << result << y << " "; // Выводим сообщение x, y

	return 0; // Завершаем программу
}



