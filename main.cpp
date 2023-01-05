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

	int ab, bb, a;
	in >> a;

//	goto BB;

	switch (a) // Перечислимая переменная
	{
	default:

	case 10: // Меток  

		out << "A";

		break;

	case 12:
		out << "B";
		break;
	
	}
	int b;

	/*if (a % 2 == 0)
	{
		b = 0;
		
	}
	else
	{
		b = 1;
	}*/

	b = (a % 2 == 0) ? 0 : 1;

	//(false) ? cout << "dfs" : cout << "3254324";




	out << b;




}