// Loops

#include<iostream>
#include<conio.h>
using namespace std;
//#define WHILE_1
//#define WHILE_2
#define FACNORIAL
#define POWER
#define ASCII
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHIL_1
	int i = 0; // счетчик цикла
	int n; // количество итераций
	cout << "Введите количество итераций:"; cin >> n;
	while (i < n)
	{
		cout << "Hello World:";
		cout << "Сам привет";
		cout << ++i << endl;
		//i++;  
#endif // WHIL_1
#ifdef WHILE_2

		char key;
		do
		{
			key = _getch(); // ожидает нажатия клавиш// обьявление в библиотеке <conio.h>
			cout << (int)key << "\t" << key << endl;
		} while (key !=27);
		

}
