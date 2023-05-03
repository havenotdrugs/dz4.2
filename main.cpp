#include <iostream>
using namespace std;

double divide(double one, double two);

int main() {
	setlocale(LC_ALL, "Ru");
	double one, two;
	while (true) {
		cout << "Введи два числа для деления: ";
		cin >> one >> two;
		if (one != 0 && two != 0) {
			break;
		}
		else continue;
	}
	cout << divide(one, two) << " - результат деления";
}

double divide(double one, double two) {
	return one / two;
}
