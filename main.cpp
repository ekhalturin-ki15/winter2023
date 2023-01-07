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


    Player pl;


    cout << pl.Say("AAAA");
    pl.Rename("Daria");
    cout << pl.Say("Hello");

    
    int a = 1;
    vector<int> v;
    while (a)
    {
        cin >> a;
        v.push_back(a); // O(1)
    }

    int s = 0;
    for (int i = 0; i < v.size(); ++i)
        s += v[i];

    v.clear();

    v.assign(10, -1);

    string ss;

    //"3454354" 
    // Чистый СИ ss.c_str();

    //cout << v;


    ss = "3abcde";
    cout << string::npos << " ";
    cout << ss.find('3') << " ";

    ss = ss + ss;

    ss.pop_back();

    ss = ss.substr(2, 1);
    ss = "1000";
    int aa = atoi(ss.c_str()); // Чистый СИ
    to_string(aa);

    cout << aa;


   

    //string<wchar> s;

   //wchar_t wc; // 2 байт UTF-16

    //wstring s;



    //stack<int> st;

    //st.push(3);
    //st.pop();

    //st.top();

    //st.size();


    //queue<int> qq;
    //qq.pop();
    //qq.push(5);
    //qq.front();
    //qq.size();
    //qq.back();




    deque<int> dd;

    dd[3];



    dd.push_front(324);
    dd.pop_front();





    //st[4];


    




    return 0; // Из main возв 0 - нет ошибок
}