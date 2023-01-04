#include <iostream> // input output stream
#include <fstream>

#include <iomanip>

#pragma warning(disable : 4996)

// # метакоманды


int main()
{
	//unsigned long long a; // 0   2^64 - 1

	//unsigned long long b = (a / 2) * 2 + 2;


	//long long c = 2 - (a % 2); // -2^63  ..  2^63 - 1 
	//c = 2 -  a & 1;
	//a += c;

	//b / 100;

	//b % 100;

	double a, b;

	



	scanf("%lf %lf", &a, &b); // Ввод данных  (& оператор взятие адреса переменной)

	std::cout << std::setprecision(9) << std::fixed << a / b;


}