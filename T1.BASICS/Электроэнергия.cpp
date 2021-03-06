﻿/*
* Электроэнергия. помогите своей семье рассчитать стоимость электроэнергии.
* Программа запрашивает количество кВт-ч за последний месяц и выводит ее стоимость.
*/

#include <iostream>
using namespace std;

#define TARIF 0.1484	// Стоимость 1 кВт-ч электроэнергии.

int main()
{	
	setlocale(LC_ALL, "ru");

	double qKvt;

    cout << "Введите количество кВт-ч за последний месяц: ";
	cin >> qKvt;

	cout.precision(2);
	cout << "Стоимость затраченных кВт-ч: " << fixed <<  qKvt * TARIF << " рублей." << endl;

	return 0;
}