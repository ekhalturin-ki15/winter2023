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

#include <vector>
#include <iostream>

#include <algorithm>



using namespace std;

int sum(int a, int b);



class Player
{
public:


	void say() = delete; // Абстракция (виртуальные методы)

	int hp = 100;

};


class Mag : public Player
{

public:
	int mana = 10;


	void say()
	{
		cout << "I'm a Mage";

	}

};

class Warrior : public Player //Наследование
{

public:
	int damage = -1;

	int run() // Полиморфизм
	{
		return 0;

	}

	int run(int a)
	{
		damage -= 10;
		return a;
	}

	void say()
	{
		cout << "I'm a Doctor";

	}



};



int main()
{
#ifdef _DEBUG
	ios_base::sync_with_stdio(0); cin.tie(0);
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	cout << sum(4, 6);

	Mag m;

	m.hp = 100;
	m.mana = 1000;

	m.say();

	Warrior w;

	w.say();


	vector<char> v;

	v.insert(v.end(), '4');

	v.insert(v.begin() + 5, {'3', '4', '5'});


	return 0;
}

int sum(int a, int b)
{
	return a + b;
}