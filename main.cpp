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

	int a = 100;

	cin >> a;
	// int mas1[a] в G++ можно

	char b;

	//Статический массив
	//Указываем конкретные числа (нельзя высчитывать)
	int mas[1000]; // [0   1000) 

	//mas[0];

	//mas[999];



	//mas[999] = 5;

	//cout << mas[1]; // RE 
	//cout << gmas[1]; // будет 0
	//mas[2000]; Поменять не получится


	// Имя mas указывает на адрес располож массива
	cout << mas <<"\n";
	cout << &(mas[0]) << "\n";

	mas[1] = 1000;

	cout << &(mas[1]) << "\n";

	cout << &(mas[2]) << "\n";

	cout << &(mas[3]) << "\n";

	mas[0] = -1;
	cout << *(mas+0) << "\n";
	cout << mas[0] << "\n";
	cout << mas[1]<< "\n";
	cout << *(mas+2) << "\n";

}

