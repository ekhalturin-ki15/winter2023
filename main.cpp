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


struct Weapon
{
	int iznos;
	char tir;

	int damage;
};


struct Player  //Структуру (трафарет того, как будут выглядить объекты)
{
	int a;

	char id;

	float score;

	Weapon my_weapon;


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


	Player  Vasya, Petya; // Объекты (ООП)


	Vasya.score = 100;
	Vasya.a = 10;
	Vasya.id = '1';



	Petya.score = 2000;
	Petya.id = '2';
	Petya.a = 10;
	Petya.my_weapon.damage = 100;




	return 0; // Из main возв 0 - нет ошибок
}

