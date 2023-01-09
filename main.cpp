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


struct O
{
	int i;
	float f;





};


int qq(int step)
{
	if (step >= 10)
	{
		
		return 0;

	}
	cout << step << " ";
	qq(step + 1);
	cout << step << " ";
}

int main(int n, char** str)
{
#ifdef _DEBUG
	ios_base::sync_with_stdio(0); cin.tie(0);
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	bitset<10> b;

	b[0] = true;

	bitset<100> q;


	vector<float> v; //Любой тип данных 
	list<float> ll; //Любой тип данных нет индексации


	queue<int> qqqq;//Любой тип данных 
	stack<int> st;//Любой тип данных 
	deque<int> dq; //Любой тип данных  удаление и добавление в начало

	set<char> s; // тип данных у которого определён оператор <
	map<string, int>  m; // Первый шаблон определён оператор <, а второй любой

	set<list<int>> ss;

	set<map<int, int>> sa;


	//set<O> so;  // Нельзя исп свои структруры, если не задали оператор <

	//for (int i = 0; i < 1e12; ++i);

	//O o1(1, 0.4), o2(6, 0.34);


	return 0;
}