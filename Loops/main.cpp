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
	int i = 0; // ������� �����
	int n; // ���������� ��������
	cout << "������� ���������� ��������:"; cin >> n;
	while (i < n)
	{
		cout << "Hello World:";
		cout << "��� ������";
		cout << ++i << endl;
		//i++;  
#endif // WHIL_1
#ifdef WHILE_2

		char key;
		do
		{
			key = _getch(); // ������� ������� ������// ���������� � ���������� <conio.h>
			cout << (int)key << "\t" << key << endl;
		} while (key !=27);
		

}
