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

	int a;
	in >> a;


	if (a)
		out << "YES";
	else
	{ // Область видимости задаёт время жизни переменным
		int b = 1;
		out << "NO";
		out << "----";

		out << b;
	}

	





}