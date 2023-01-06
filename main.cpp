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


struct Player {
	int a;
	bool bl;
	char ch;
};


void changScore(Player a)
{





}

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

	Player pl1, pl2, pl3, pl[100];

	Player *ptr = &pl1;

	(*ptr).a = 2323;


	pl[10].a = 100;

	pl[11] = pl[10];


	changScore(pl[10]);


	return 0; // Из main возв 0 - нет ошибок
}

