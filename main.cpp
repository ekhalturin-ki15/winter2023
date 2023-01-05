#include <iostream> // input output stream
#include <fstream>

#include <iomanip>

#include <cmath>

#pragma warning(disable : 4996)

// # метакоманды


//#define END cout <<"\n"


using namespace std;


int main()
{ // Новая область видимости
	//freopen("input.txt", "r", stdin);

	
#ifdef RED

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif


	int a;
	int b;


	cin >> b;

	a = 1;

	while (a < b)
	{
		cout << a << "\n";
		a *= 2;
	}


	a = -3;
	while (true)
	{
		if (a >= b)
			break;


		cout << a << "\n";
		a *= 2;


		if (a < 0) 
			break;
	}

	cout << "-----------\n";
	//a = 1;
	//while (a *= 3)
	//{
	//	cout << a << "\n";
	//	continue; // Прыжок на условие
	//	if (a >= b)
	//		break;


	//}


	/*a = 10;
	while (cout << a << "\n")
	{
		--a;

		if (a > 5)
		{
			--a;
			continue;
		}

		
		if (a == 0) break;


	}*/



	a = 10;

	while (a < 10) // Может вообще не выполнится
	{

		if (a < 5)
		{
			a = 10;
			continue;
		}
		
		cout << a;
		++a;
	}

	a = 0;
	do // Мы точно зайдём внутрь
	{
		if (a < 5)
		{
			a = 10;
			continue; // Идём на условие (инкремент)
		}

		cout << a;
		++a;
	} while (a < 10); // ! ставим точку с запятой

}