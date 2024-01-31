#include<iostream>
#include<conio.h>
using namespace std;

#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define Escape 27
#define Enter 13


void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		////cout << (int)key << "\t" << key << endl;
		//     if (key == 'w' || key =='W' ||key == UP_ARROW) cout<< "Вперед" <<endl;
		//else if (key == 's' || key =='S' ||key == DOWN_ARROW)cout << "назад" << endl;
		//else if (key == 'a' || key =='A' ||key == LEFT_ARROW)cout << "влево" << endl;
		//else if (key == 'd' || key== 'D' ||key == RIGHT_ARROW)cout << "вправо" << endl;
		//else if (key == ' ')cout << "прыжок" << endl;
		//else if (key == 13)cout << "огонь" << endl;
		//else if (key != 27)cout << "Error" << endl;
		switch (key)
		{
		case 'w':case 'W': case UP_ARROW:    cout << "вперед" << endl; break;
		case 's':case 'S': case DOWN_ARROW:  cout << "назад" << endl; break;
		case 'a':case 'A': case LEFT_ARROW:  cout << "влево" << endl; break;
		case 'd':case 'D': case RIGHT_ARROW: cout << "вправо" << endl; break;
		case Escape :cout << "Выход" << endl;
			case - 32:break;
		default: cout << "Error" << endl;
		}
	} while (key != 27);

}