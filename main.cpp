#include <iostream> // input output stream
#include <fstream>
#include <iomanip>
#include <cmath>
#include <chrono>
#include <random>
#include <vector>

#include <queue>

#include <set>



#include <map> // MVP




#include <list>

//#include <forward_list>

#include <string>


#include <stack>

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


struct Player
{
    string name;// = "Noname";


    Player() //: name("Noname") список инициализации
    {
        name = "Noname";
    }

    string Say(string s) const // Этот метод никак не влияет на значение полей
    {
        return string(name + " say = " + s + "\n");
    }

    void Rename(string s)
    {
        name = s;
    }


};






pair<int, float> p;


struct MyVector
{



};



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


    list<int> l({3, 5, 3, 1, 10});
   // l[i] // O(n)

    l.insert(l.end(), 34); // O(1)
    //l.erase(l.end());

    l.erase(l.begin());
    l.back();

    vector<int> v;
   // v[i] // O(1)



    set<int> s = { 3,4,1,3,7,5,2,10 };
    s.find(4); // O(log(n))

    *s.begin();

    *(prev(s.end(),1));


    multiset<int> ms;
    ms.insert(4);
    ms.insert(4);
    ms.insert(4);
    ms.insert(4);
    ms.insert(4);
    ms.insert(4);


    map<char, int> m;

    m.insert({'a', 3});
    m.insert({'0', 2});
    m.insert({'b', 1}); // O(log(n))
    //m.insert({'a', 30});
    m.insert({'c', 5});
    //m.insert({'a', 3333});
    m.insert({'-', 4});
    m.insert({'+', 6});
    m.insert({'!', 10});


    m.count('2');


    if (m.find('I') != m.end())
    {
        cout << "3443";
    }

    if (m.count('a'))
        cout << m['a'];

    m['a'] = 3333;
    m['a'] = 7777;

    m['K'];

    m.erase('a');


    map<string, int> um;
    um["aaaa"] = 10;
    um["aaaa"]++; // O(log(n))


    return 0; // Из main возв 0 - нет ошибок
}