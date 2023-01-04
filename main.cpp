#include <iostream> // input output stream


#include "math.h" // Чистый СИ либо Ваши

//#include <cmath> // C++

using namespace std; // Пространство имён

namespace RED
{
	int a;
}


int a = 20; // Глобальные переменные (есть стартовые значения)


int main()
{

	cout << a;

	RED::a;

	// console input
	//std::cerr
	int a = 40;	int b;


	cout << a;


	//cout << b;

	//std::cin >> a;
	//std::cin >> b;

	cin >> a >> b;

	int c;

	c = a + b;

	//std::cout << b;
	

	//char ch = "a";
	char ch = 'a';

	//std::cout << ' '; // Одинарные ковычки - это символ
	//std::cout << "-----";// Двойные ковычки - это массив символов (строка)
	//std::cout << c;

	std::cout << ' ' << "-----" << c;






}