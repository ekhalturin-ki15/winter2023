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

#include <tuple>

#include <typeinfo>


#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:16777216")
// # метакоманды


//#define END cout <<"\n"

using namespace std;


template <typename F, typename S>
struct Pair
{
    F first;
    S second;

};





pair<int, float> p;




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


    p.first = 10;
    p.second = 0.4;

    Pair<int, float>  pp;
    pp.first = 10;
    pp.second = 0.4;

    tuple<int, int, int, int>  t;

    cin >> get<0>(t);
    cout << get<0>(t);



   // stange<5>();





    return 0; // Из main возв 0 - нет ошибок
}