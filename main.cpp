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


    set<int> s; // Сет не хранит дубляжи

    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);

    s.insert(3);


    

    s.insert(7); // O(log(n))

    s.erase(5);

    s.erase(7);  // O(log(n))

    //s[0]; Индексов нет

    //srand(1);

    //for (int i = 0; i < 1e6; ++i)
    //{
    //    s.insert(rand());
    //}

    for (set<int>::iterator it = s.begin();
        it != s.end(); ++it)
    {

        cout << *it << " ";

    }
    cout << "\n";

    cout << s.count(7); // O(log(n)) Очень быстро понимаем, добавляли ли мы


    cout << "\n";


    vector<int> v = { 3,45,5,2,1,3 };
    v.insert(v.begin() + 1, 60); // O(n)
    v.erase(v.begin()); // O(n)

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    for (vector<int>::iterator it = v.begin(); 
        it != v.end(); ++it)
    {
        cout << *it << " ";
    }

    

    cout << "\n";
    cout << *(v.begin());

    //cout << *(v.end());



    
    //v[i] O(1)



    return 0; // Из main возв 0 - нет ошибок
}