#include <iostream> // input output stream
#include <fstream>
#include <iomanip>
#include <cmath>
#include <chrono>
#include <random>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <list>
#include <string>




#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:16777216")
// # метакоманды


//#define END cout <<"\n"

using namespace std;


struct build
{
	char ch;
	int h;

	char balcony;


	void outBuild()
	{
		for (int y = 0; y < this->h; ++y)
		{
			if (y % 2 == 1)
			{
				cout << balcony;
				continue;
			}
			cout << this->ch;
		}
		cout << "\n";
		for (int y = 0; y < h; ++y)
		{
			cout << ch;
		}
		cout << "\n";

	}
};

struct People
{
	int x = 0, y = 0;

	void Move(int dx, int dy)
	{
		x += dx;
		y += dy;
	}

	char Say()
	{
		return 'A';

	}


	bool See(People pl)
	{
		if ((x == pl.x) && (y == pl.y))
			return true;

		return false;


	}

};


bool move(People somebody)
{
	somebody.x++;
	somebody.y--;

	if ((somebody.x < 0) || (somebody.y < 0)) return false;

	return true;
}


bool move(People somebody, int dx, int dy)
{
	somebody.x+=dx;
	somebody.y+=dy;

	if ((somebody.x < 0) || (somebody.y < 0)) return false;

	return true;
}


// _Тип возр значения_    _Имя функция_  (_Параметр1  Типа Имени_ , _Параметр2_)
char main()
{ 
	srand(time(0)); // Линейный конгруэнтный метод
	ios_base::sync_with_stdio(false);

	//Откл синх scanf printf с cin cout
	cin.tie(0); cout.tie(0);
#ifdef RED
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	People Yan; Yan.x = 10; Yan.y = 20;
	People Daria, Evgenii, Michaill;


	Yan.x++;

	--Daria.y;


	move(Yan);


	move(Daria, 10, 10);

	cout << Yan.Say();

	if (Daria.See(Yan))
	{
		cout << Daria.Say();
	}


	return 0; // Из main возв 0 - нет ошибок
}

