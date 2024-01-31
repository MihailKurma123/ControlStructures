#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number; // число введенное с клавиатуры
	int revers = 0; //исходное число записанное в обратном порядке(цифры задом на перрёд)
	cout << "Введите число:"; cin >> number;
	int buffer = number;// копируем введенное чило, чтобы данные
	while (buffer)
	{
		revers *= 10;// прежде чем создать слудующтй разряд нужно выделить для него места
		revers += buffer % 10;// сохраняем младший разряд
		buffer /= 10;// убираем младший разряд из буфера
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "Палендром" << endl;
	}
	else
	{
		cout << "May be the naxt time" << endl;
	}
}