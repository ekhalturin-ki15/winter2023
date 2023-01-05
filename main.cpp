#include <iostream> // input output stream
#include <fstream>

#include <iomanip>

#include <cmath>

#include <chrono>

#include <random>

#pragma warning(disable : 4996)

// # метакоманды


//#define END cout <<"\n"


using namespace std;


void main()
{ // Новая область видимости
	//freopen("input.txt", "r", stdin);

	mt19937 generator;

	srand(time(0)); // Линейный конгруэнтный метод
	
#ifdef RED

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

	int h , w;
	cin >> h >> w;
	
	cout.flush();

	//break;

	int y = 0;
	while (y <= h)
	{
		int x = 0;
		while (x <= w)
		{
			if ((x == 0) || (x == w) || (y == 0) || (y == h))
			{
				cout << "#";
				++x;
				continue;
			}

			cout << ((rand()%2 == 0)?'*':' ')  ;
			++x;
		}
		cout << "\n";
		++y;
	}





	//return 0;
}

