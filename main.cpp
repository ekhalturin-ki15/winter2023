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



template <typename TYPE>
struct Rect
{
    TYPE len;
    TYPE height;

    void bit()
    {
        len <<= height;

    }

};




struct Player
{
    int inv[100]; // 400

    string name; // 20


    int a;

    int min(int b)
    {
        if (this->a < b) return this->a;
        return b;
    }

    //void out()
    //{
    //    //name.back();
    //    cout << name <<" ";


    //}

    string out()
    {
        return this->name;

    }

};


int a, b;


//void ничего не возращать
//void Min(int a, int b)
//{
//    if (a < b) return;
//    return;
//}


template <typename T>
T Min(T a, T b)
{
    if (a < b) return a;
    return b;
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

    Rect<int> r;
    r.height = 5;
    r.len = 8;

    /*Rect<float> rr;
    rr.height = 5.4;
    rr.len = 8.2;*/


    Rect<char> d;

    vector<vector<vector<int>> > qv;

    Min<float>(1.3, 5);


    std::min<int>(1.3, 5);


    int n[5];

    //cin >> n;
    for (int i = 0; i < 5; ++i)
    {
        cin >> n[i];
    }

    for (int i = 3; i >= 0; --i)
    {
        a = n[i];
        b = n[i + 1];
        Min(a, b);
    }


    Player p1, p2;
    p1.name = "Egor";
    p2.name = "Nikita";

    p1.a = 5;
    cout << p1.name <<"\n";
    cout << p2.out() <<"\n";


    //cout << n;// char*


    vector<int> v;
    vector<char> vv;
    vector<Player> pl;

    return 0; // Из main возв 0 - нет ошибок
}