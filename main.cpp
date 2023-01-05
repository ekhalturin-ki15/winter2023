#include <iostream> // input output stream
#include <fstream>

#include <iomanip>

#include <cmath>

#pragma warning(disable : 4996)

// # метакоманды

using namespace std;



int main()
{ // Новая область видимости
	//freopen("input.txt", "r", stdin);

	
	ifstream in("input.txt");
	ofstream out("output.txt");



	unsigned long long a = 10000;
	//unsigned long long b(10000);


	unsigned long long* ptr_a; // Указатель хранит адрес

	ptr_a = (&a); // Получить адрес


	unsigned long long b = (*&a);

	out << b <<" ";

	out << ptr_a << " ";

	*ptr_a; // Обращение по указанному адресу


	(*ptr_a) = 777;

	a = 999;

	out << a << "\n";


	{
		int a = 10;

		out << a << "\n";

		a = 1000;

		out << (*ptr_a) << "\n";

	}


	
	//(*0x534) = 324325;


}