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

	int aa = 6; int bb = 3;
	Swap(aa, bb);
	cout << aa << " " << bb;



	return 0;


	int a;

	int& alt_a = a;

	cin >> alt_a;

	cout << &a << "\n";

	int *q = &a;

	inc_with_change(q);
	cout << a <<"\n";
	inc_with_change(a);
	cout << a << "\n";

	//alt_inc_with_change(1000); // Нельзя сделать псевдоним на конст

	inc_without_change(1000);

	return 0; // Из main возв 0 - нет ошибок
}

