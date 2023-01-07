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

#include <functional>

#include <algorithm>




#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:16777216")
// # метакоманды


//#define END cout <<"\n"

using namespace std;



bool Less(int a, int b)
{
    return a < b;
}

bool Greate(int a, int b)
{
    return a > b;
}


// <
int Min(int a, int b, function<bool(int,int)> Q)
{
    if (Q(a, b)) return a;
    else return b;
}




// _Тип возр значения_    _Имя функция_  (_Параметр1  Типа Имени_ , _Параметр2_)
char main()
{
    srand(time(0)); // Линейный конгруэнтный метод
    ios_base::sync_with_stdio(false);

    //Откл синх scanf printf с cin cout
    cin.tie(0); cout.tie(0);
#ifdef RED
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif




    cout << Min(4, 8, Less) <<"\n";
    cout << Min(4, 8, Greate) << "\n";


    return 0; // Из main возв 0 - нет ошибок
}