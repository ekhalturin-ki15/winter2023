#include <iostream> // input output stream
#include <fstream>

#include <iomanip>

#include <cmath>

#include <chrono>

#include <random>

#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:16777216")
// # метакоманды


//#define END cout <<"\n"




using namespace std;

int gmas[1000]; // можно сделать глобально, и там знач по умолчанию



void main()
{ // Новая область видимости
	//freopen("input.txt", "r", stdin);

	mt19937 generator;

	srand(time(0)); // Линейный конгруэнтный метод
	
#ifdef RED

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif


	int* mas = new int[100];

	int* new_mas = new int[200];


	for (int i = 0; i < 100; ++i)
	{
		new_mas[i] = mas[i];
	}
	delete[] mas;
	

	int i = (long long)100;

	static_cast<long long> (100);

	float a = 0.5;
	int aa = a;
	void* vptr = &a;


	cout << *(int*)(vptr);

	//Константное число
	const int SIZE = 1000 + 1000;


	constexpr int СИСТЕМА_СЧИСЛЕНИЯ = SIZE * SIZE;
	//constexpr вычесления на этапе компиляции
	int mas3[СИСТЕМА_СЧИСЛЕНИЯ];

	for (int i = 0; i < SIZE; ++i)
	{
		mas3[i] = mas[i - 1] % СИСТЕМА_СЧИСЛЕНИЯ;
	}


	int aaaa = СИСТЕМА_СЧИСЛЕНИЯ;

	int bbbb = СИСТЕМА_СЧИСЛЕНИЯ;



}

