

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double dohod(double deposit, double stavka, int days) { // Функция доход, функция депозит, функция ставка, переменная день

	double stavka_decimal = stavka / 100.0; // преобразуем годовую ставку из процентов в десятичную дробь

	double stavka_per_day = stavka_decimal / 365.0; // Вычисляем период начисления 

	double final_money = deposit * pow(1 + stavka_per_day, days); // Используем конечную сумму по формуле сложного процента

	double income = final_money - deposit; // Доход = конечная сумма - начальный вклад

	return income; // Возвращаем доход

}


	int main(){

		system("chcp 1251"); // Русский язык

		double deposit = 1000000.0; // Сумма депозита 1 миллион рублей

		double stavka = 50.0; // Ставка депозита 50 %

		int days = 365; // Ставка дней

		double income = dohod(deposit, stavka, days); // Вызываем функцию и сохраняем результат в переменную income

		cout << fixed << setprecision(2); // Используем для фиксированного формата 2 знака после запятой

		cout << "Начальный вклад: " << deposit << "руб" << "\n"; // Выводит начальный вклад

		cout << "Процентная ставка: " << stavka << "% годовых" << "\n"; // Выводит процентную ставку

		cout << "Срок вклада: " << days << "дней" << "\n"; // Выводит срок вклада

		cout << "Доход по вкладу: " << income << "руб" << "\n"; // Выводит доход по вкладу

		cout << "Итоговая сумма: " << deposit + income << "\n"; // Выводит итоговую сумму

		return 0; // Завершает программу


	}





