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


class Divite
{
private:
	std::vector<int> num;
	int max_num;
	int sum;

	void pushNumber(int num);

public:
	Divite();

	std::vector<Divite> cont(int n);

	void outDivite(std::ostream& out) const;

	bool operator<(Divite r);

	//bool cmp(Divite l, Divite r) const;
};


Divite::Divite()
{
	sum = 0;
	max_num = 1;
}


vector<Divite> Divite::cont(int n)
{
	vector<Divite> vd;
	for (int i = max_num; i <= n; ++i)
	{
		Divite d = *this; // this это указатель на текущий объект

		d.pushNumber(i);

		auto it = d.cont(n - i);

		/*for (int j = 0; j < it.size(); ++j)
			vd.push_back(it[j]);*/

		if ((it.size() == 0) && (n - i == 0))
		{
			vd.push_back(d);

		}
		else
		{
			vd.insert(vd.end(), it.begin(), it.end());
		}
	}






	return vd;
}


void Divite::pushNumber(int _num)
{
	num.push_back(_num);

	max_num = _num;

	sum += _num;
}



void Divite::outDivite(std::ostream& out) const
{
	for (int i = 0; i < num.size(); ++i)
	{
		if (i > 0) out << " ";
		out << num[i];
	}
	out << "\n";
}


//bool Divite::cmp(Divite l, Divite r) const			// friend
//{
//	/*if (l.num > r.num)
//	{
//		return true;
//	}
//	return false;*/
//
//	return (l.num > r.num);
//}

bool Divite::operator<(Divite r)			// friend
{
	/*if (l.num > r.num)
	{
		return true;
	}
	return false;*/

	return (num > r.num);
}




class Table
{

private:
	std::vector<Divite> table;



public:

	void createTable(int n);

	void outTable(std::ostream& out) const;

};

void Table::createTable(int n)
{
	Divite d;
	table = d.cont(n);

	std::sort(table.begin(), table.end());//, Divite::cmp);

}


void Table::outTable(std::ostream& out) const
{
	for (const auto& it : table)
	{
		it.outDivite(out);
	}

}


int main()
{
#ifdef _DEBUG
	ios_base::sync_with_stdio(0); cin.tie(0);
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	int n; cin >> n;

	Table table;

	table.createTable(n);

	table.outTable(cout);

	return 0;
}