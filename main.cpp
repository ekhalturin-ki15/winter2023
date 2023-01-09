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


struct public_struct
{
public:


	int pu;// Изменить могу везде


	void change(int _pr)
	{
		pr = _pr;

		inside_method();
	}


private:


	void inside_method() const
	{
		cout << "I'm a secret\n";
	}


	int pr;
};


class private_class
{
	int pr; // Изменить смогу только из метода

};

struct private_struct
{
private:
	int pr; // Изменить смогу только из метода

};




int main()
{
#ifdef _DEBUG
	ios_base::sync_with_stdio(0); cin.tie(0);
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	public_struct s;
	private_class c;


	s.pu = 1000;
	s.change(100);
	//s.pr = 99;
	
	//s.inside_method();



	//c.pr = 1000;// Ошибка поле приватное


	vector<int> v(10);


	//v.s = 1000; // Переменная, отвечающая за размер приватная

	v.resize(1000); // private v.s = 1000


	return 0;
}