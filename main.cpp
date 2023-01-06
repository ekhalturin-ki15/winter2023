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


void outBuild(build b)
{
	for (int y = 0; y < b.h; ++y)
	{
		if (y % 2 == 1)
		{
			cout << b.balcony;
			continue;
		}
		cout << b.ch;
	}
	cout << "\n";
	for (int y = 0; y < b.h; ++y)
	{
		cout << b.ch;
	}
	cout << "\n";
		
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

	int n;
	cin >> n;


	build* mas = new build[n];

	for (int i = 0; i < n; ++i)
	{
		char ch;
		cin >> mas[i].ch;
		cin >> mas[i].balcony;
		mas[i].h = 1;
	}

	int k;
	cin >> k;

	for (; k--;)
	{
		int command;
		cin >> command;

		int j;
		switch (command)
		{
		case 1:
			
			cin >> j;
			mas[j].h++;
			break;

		case 2:
			
			cin >> j;
			mas[j].h = 0;
			break;

		case 3:
			cin >> j;
			cin >> mas[j].balcony;
			break;
		case 4:
			cin >> j;
			cin >> mas[j].ch;
			break;

		}


		for (int j = 0; j < n; ++j)
		{
			outBuild(mas[j]);
			mas[j].outBuild();
		}
		cout << "\n``````````````\n";


	}







	delete[] mas;
	return 0; // Из main возв 0 - нет ошибок
}

