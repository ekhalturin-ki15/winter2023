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


int k;

int* q;

void rect(int x)
{

	if (x < k)
	{
		
		q[x] = 0;
		rect(x + 1);
		if (x != 3)
		{
			q[x] = 1;
			rect(x + 1);
		}
	}
	else
	{
		for (int i = 0; i < k; ++i)
			cout << q[i];
		cout << "\n";
	}

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

	cin >> k;
	q = new int[k];

	rect(0);


	/*for (int j = 0; j < (1 << (k)); ++j)
	{
		int buf = j;
		for (int x = 0; x < k; ++x)
		{
			cout << buf % 2;
			buf /= 2;

		}
		cout << "\n";


	}*/



	delete[] q;

	return 0; // Из main возв 0 - нет ошибок
}

