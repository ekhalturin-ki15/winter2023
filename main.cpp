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

void inc_without_change(int q)
{
	q++;
	return;
}



void inc_with_change(int *ppp)
{
	cout << ppp <<"\n";
	(*ppp)++;
	return;
}


void inc_with_change(int* ppp, int a)
{
}

//Если есть отличие по параметрам, то можно дать точно такое же имя
//Если отл по кол-во, или есть разл по типу
void inc_with_change(int &alt2_a)
{
	++alt2_a;
}


int Min(int a, int b)
{
	return (a < b) ? a : b;
}


void Swap(int& a, int& b)
{
	//a = a + b; // 3 2 
	//b = a - b; // 3 1
	//a = a - b; // 2 1

	a ^= b ^= a ^= b; // XOR
}

int Min(int a, int b, int c)
{
	if (a > b)
	{
		//swap(a, b);
		//int t = a;
		//a = b;
		//b = t;  1 2
		a = a + b; // 3 2 
		b = a - b; // 3 1
		a = a - b; // 2 1
	}
	if (a > c) swap(a, b);
	return a;
}


//void print(int a)
//{
//	cout <<"1"<< "\n";
//}

//void print(float a)
//{
//	cout << "2" << "\n";
//}

char print(char a)
{
	cout << "2" << "\n";
	return '1';
}





char print(const int a)
{

	return 'a';
}




// Если отличие только по возр значению, то точно нельзя
//
//int print(char a)
//{
//	cout << "3" << "\n";
//	return 10;
//}


// _Тип возр значения_    _Имя функция_  (_Параметр1  Типа Имени_ , _Параметр2_)
char main(int n, char** arg)
{ 
	srand(time(0)); // Линейный конгруэнтный метод
	ios_base::sync_with_stdio(false);

	//Откл синх scanf printf с cin cout
	cin.tie(0); cout.tie(0);
#ifdef RED
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	print('3');


	int a = 1000;
	cin >> a;


	const int CC = a; // Уже не constexpr

	//CC = 100;


	constexpr int C = 1000; // Вычисл конст изно знач до запуска прог


	int mas[C];



	print(a);

	print('2');

	//print(0.3545); Не знает во что конверт

	print(int(0.3545));

	return 0; // Из main возв 0 - нет ошибок
}

