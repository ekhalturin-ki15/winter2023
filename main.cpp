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


	int a = 111;

	int* b = &a;

	//int *bb, *c;


	//b = 2323; Нельзя

	(*b) = 222;


	cout << a << "\n";
	cout << *b << "\n";
	cout << b << "\n";
	cout << &(*b) << "\n";

	cout << &b << "\n";


	int** ptr_b;

	ptr_b = &b;


	cout << &(**ptr_b);
	cout << '\n';

	int *aa;

	auto &aaa = a; // auto это автоматический вывод данных
	auto ccc = 324234ull; // auto смотрит выражение

	if (true)
	{
		//break; 
		//auto ccc = 2314324;
		ccc = 2314324; // Разные команды

	}


	//auto  cpp 17 

	aaa = 5;

	cout << a;
	cout << '\n';

	//&(переменная) Получить адрес переменной
	a = -1000;

	while (a < 100)
		a++;
	a = -100;



	while (a < -95)
	{
		cout << a;
		cout << '\n';
		a++;

		//break; // Выходим из цикла или switch case


	} // Возращаюсь на начало цикла


	cout << a;


	//break;
	//return 0;





}