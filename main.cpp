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


// _Тип возр значения_    _Имя функция_  (_Параметр1  Типа Имени_ , _Параметр2_)

#define Minn(ans, a, b) int ans;\
					if (a < b)\
					ans = a;\
 else\
 ans = b;\
 return ans;

int Min( int a , int b)
{
	int ans;
	if (a < b)
		ans = a;
	else
		ans = b;

	// ans = (a<b)?a:b;
	return ans;
}






// _Тип возр значения_    _Имя функция_  (_Параметр1  Типа Имени_ , _Параметр2_)
char main(int n, char** arg)
{ 
	int** m = new int* [100];

	srand(time(0)); // Линейный конгруэнтный метод
	ios_base::sync_with_stdio(false);

	//Откл синх scanf printf с cin cout
	cin.tie(0); cout.tie(0);
#ifdef RED
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// --------------

	int a = 1;

	cin >> a;

	int b = Min(5, 4) + Min(1, 10);
	cout << b;

	//Min(9, 10) = 1000;


	Min(1, 3);






	return 0; // Из main возв 0 - нет ошибок
}

