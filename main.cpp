#include <iostream>
#include <cmath>
#include <sstream>

#include <vector>


#include <set>
#include <map>
#include <list>
#include <bitset>
#include <queue>
#include <stack>


using namespace std;


struct Ball
{
	bool isDelete = false;
	int color;
};

int main()
{
#ifdef _DEBUG
	ios_base::sync_with_stdio(0); cin.tie(0);
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<int> v(n);

	//for (int i = 0; i < n; ++i)
	//	cin >> v[i];


	/*for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		

		cin >> (*it);

		cout << (*it);
	}*/




	// for range
	//for (auto& it : v) // Мы делаем пробежку от begin До end 
	//	//и складируем данные в it (если нет &, то копируем значения
	//	//Иначе исп. оригинал)
	//{
	//	cin >> it;
	//}

	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		int& new_it = *it;

		//cin >> *it;

		cin >> new_it;
	}



	return 0;
}