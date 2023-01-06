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

int diva(int a, int b)
{
    int s = a / b;
    if (a % b != 0) ++s;
    return s;


}

int N;

int diva_(int a, int b)
{
    return (a + b - 1) / b;

}


//int guessFunction(int f(int, int))
//{
//    int res = f(1, 2);
//    if (res == 3)
//        return 1;
//    if (res == -1)
//        return 2;
//    if (res == 2)
//        return 3;
//}

int guessFunction(int (*f)(int, int))
{
    int res = f(1, 2);
    if (res == 3)
        return 1;
    if (res == -1)
        return 2;
    if (res == 2)
        return 3;
}


bool cmp(int a, int b)
{
    return a > b;
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

    //int n;


    //int mas[100];


    ////a + b;
    ////a - b;

    ////std::sort(mas, mas + 100); // O (n * log(n)) 
    ////Асимптотика



    ////O(1)

    //int  m;
    //cin >> n;

    ////O(1)
    //int q = 100;

    //int a = 1, b = 2;

    //a + b; // 10

    //a / b; // 120


    //sqrt(a); // 400

    //a << 1;

    //a | b;

    //a& b;


    ////O(n)

    ////  10^7
    //for (int i = 0; i < n; ++i)
    //    q++;


    ////O(n*m)  
    //for (int i = 0; i < n; ++i)
    //{
    //    for (int j = 0; j < m; ++j)
    //    {
    //        q++;
    //    }
    //}


    ////O(log(n))
    //for (int i = 1; i < n; i*=2)
    //    q++;

    ////
    ////1 1 2 3 5 8 13 21   2^n


    ////O(sqrt(n))  корневой деком
    //for (int i = 0; i < sqrt(n); ++i)
    //{

    //}
    
    bool flag = true;

    int s = 0;


   /* while (true)
    {
        flag = false;
        
        
        
        if (flag == false)
        {
            cout << s;
            return 0;
        }
    }*/


    int n = 10;
    int mas[100];
    for (int i = 0; i < n; ++i)
    {
        int l, r;
        cin >> l >> r;


        for (int j = l; j <= r; ++j)
            mas[j]++;

    }





  
    // С++
    std::function<int(int, int)> f = diva;

    int (*A)(int ,int) = diva;

    guessFunction(diva);
    guessFunction(diva_);

    A(1, 4);


   cout <<  min(1, 2, cmp);

    void* a = diva;
    a = &n;
    
    int a, b;

    a ^= b ^= a ^= b;
    
    char ch;


   // if ((ch >= 'A') && (ch <= 'Z'))



    return 0; // Из main возв 0 - нет ошибок
}