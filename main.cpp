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





struct Player
{
    int inv[100]; // 400

    char name[20]; // 20


    int a;

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

    //int a; // 4 байт 

    //char qq; // 1 байт


    //float f; // 4 байт

    //f = f / f;

    //a = a / 3;





    //char* mas;
    //mas = new char[1000];
    //for (int i = 0; i < 1000; ++i)
    //{
    //    mas[i] = 48;

    //}


    //cout << a;

    //cout << qq;


    //if (true)  a += a;
    //else
    //{


    //}


    //a = ((f == 0.5) ? 5 : 0);



    //while (1)
    //{


    //    //break;
    //}
    //// За циклом


    //while (1) a = 5;

    //do a = 3; while (1);


    //do
    //{



    //} while (1); // Не забываем ;

    //int i = 0; // В области main
    //for (int i = 0; (true);   ++i)
    //{

    //    break;

    //    continue;

    //    return 0;

    //    exit(0); // Выйти из программы
    //  
    //}
    //


    //int q[1000];




    //*(q + 5);
    //q[5];


    int nn;
    cin >> nn;


    int* ne = nullptr; // Заглушка, чтобы показать, указатель пока не исп


    //ne = new int[6];


    Player* my_pl;




    my_pl = new Player;



    (*my_pl).a = 100;
    // Одно и тоже, что 
    my_pl->a = 100;

    delete[] my_pl;

    my_pl = new Player;

    int     a, b, c;
    Player  aa, bb, cc;


    aa.inv[10] = 1;




    if (!ne)
    {




        ne = new int;



        delete ne;
    }


    *ne;



    /*{


    }*/







    return 0; // Из main возв 0 - нет ошибок
}