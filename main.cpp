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


struct Pair
{
    //Конструктор
    //Вызывается автомотически при объевлении (создании) объекта
    Pair()
    {
        // Нужен для инициализации полей
        /*first = 'a';
        second = 0.3434;
        third = 0;*/
    }

    //На букве ё тильда
    ~Pair()
    {
        //delete 
        cout << "-------\n";

    }


    char first; // 1 поле
    float second; // 2 поле

    int third;

};

struct Mas
{
    int* mas;
    int size;

    Mas(int n)
    {
        size = n;
        mas = new int[size];
    }

    ~Mas()
    {
        delete[] mas;
    }


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

    {
        Pair pr;
    }

    Pair* q;
    q = new Pair;

    delete q;

    vector<int> v({ 1, 3, 4, 5, 0 });
    vector<int> qqq(10, -1);
    vector<int> e(45);
    vector<int> o;


    cout << o.size();
    cout << "\n";
    cout << o.capacity();
    cout << "\n";
    o.push_back(12);
    cout << "\n";
    o.pop_back();
    cout << "\n";

    //cout << o[0];




    o.clear();
    o.push_back(10);
    o.push_back(20);
    cout << "\n";
    cout << o.back();
    cout << "\n";

    cout << o.front();
    cout << "\n";

    o.assign(10, -1);

    o.resize(100); // Конструктор по умолчанию

    for (int i = 0; i < 100; ++i)
    {
        cout << o[i];

    }



    



    return 0; // Из main возв 0 - нет ошибок
}