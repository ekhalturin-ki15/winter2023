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

int a;

namespace qqq
{
	int a;


}



struct Q
{
	int a;

};



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

	qqq::a;
	//cin >> Не функции


	Q   b, c;


	int a = 10, b =2, c = 100;

	cout << std::min({ a, b, c }, greater<int>());

	std::min('2', '4');

	std::min('2', '4', greater<int>());

	std::swap(a, b);

	return 0; // Из main возв 0 - нет ошибок
}

