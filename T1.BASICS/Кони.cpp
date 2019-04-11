/*
* Кони. Вводим 4 целых числа.
* Это координаты двух коней на шахматной доске. Бьют ли они друг друга?
*/

#include <iostream>
using namespace std;

bool isHorseBeat(int, int, int, int);	// Анализ хода лошадей.
void drawDesk(int, int, int, int);		// Рисование доски.

int main()
{
	setlocale(LC_ALL, "ru");

	int hor1, ver1;		// Координаты 1-й фигуры по горизонтали и вертикали.
	int hor2, ver2;		// Координаты 2-й фигуры по горизонтали и вертикали.

	cout << "Правила ввода: номер по горизонтали (слева направо), пробел, номер по вертикали (снизу вверх), ввод." << endl;

	cout << "Введите координаты 1-го коня: ";
	cin >> hor1;
	cin >> ver1;

	cout << "Введите координаты 2-го коня: ";
	cin >> hor2;
	cin >> ver2;

	// Вывод на экран доски с фигурами.
	cout << endl << "Доска." << endl;
	drawDesk(hor1, ver1, hor2, ver2);

	// Вывод на экран ответа.
	if (isHorseBeat(hor1, ver1, hor2, ver2))
		cout << "Кони бьют друг друга." << endl;
	else
		cout << "Кони НЕ бьют друг друга." << endl;

	return 0;
}

// Анализ хода лошадей.
bool isHorseBeat(int h1, int v1, int h2, int v2)
{
	// Координаты должны различаться на 2 шага по горизонтали и на 1 по вертикали, или 2 по вертикали и 1 по горизонтали.
	if ((abs(h1 - h2) == 2 && abs(v1 - v2) == 1) || (abs(h1 - h2) == 1 && abs(v1 - v2) == 2))
		return true;
	else
		return false;
}

// Рисование доски с 2-мя фигурами.
void drawDesk(int h1, int v1, int h2, int v2)
{
	// Размеры доски.
	int deskHorSize = 8;
	int deskVertSize = 8;

	for (int i = deskHorSize; i >= 1; i--)
	{
		cout << i;	// Вывод номера строки.
		for (int j = 1; j <= deskVertSize; j++)
		{
			// Вывод значка фигуры по заданным координатам, вместо стандартного символа.
			if ((i == v1 && j == h1) || (i == v2 && j == h2))
				cout << 'H';
			else
				cout << '-';
		}
		cout << endl;
	}
	// Вывод названия столбца.
	cout << " ABCDEFGH" << endl;
}