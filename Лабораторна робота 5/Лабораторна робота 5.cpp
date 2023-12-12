#include<iostream> 
# include<Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\t\tЛабораторна робота #5\n\n";
	cout << "\t\tЗавдання 29 (підвищена складність)\n\n";
	int b, c, i = 1, f = 1, j =1, g = 0, t;

	cout << "Введіть число (але максимальна кількість цифр буде 9): ";
	cin >> b;
	t = b;
	while (b != 0) {
		b /= 10;
		g++;
	}
	while (i < g) {
			f *= 10;
			i++;
	}
	b = t;
	i = j;
	if (b >= 0) {
		cout << "Ваше число: ";
		while (i <= g) {
			c = (b / f) % 10;
			if ((c != 5) && c != 0) {
				cout << c;
			}
			f /= 10;
			i++;
		}
	}
	else if (b < 0) {
		cout << "Ваше число: -";
		while (i <= g) {
			c = (b / f) % 10;
			if ((c != -5) && c != 0) {
				cout << -c;
			}
			f /= 10;
			i++;
		}
	}
 return 0;
}