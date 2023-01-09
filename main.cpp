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
	int color = -2;


	bool operator ==(Ball right) // Перегрузка операторов
	{
		if (color == right.color) return true;
		return false;
	}

};

struct Process
{

private:
	vector<Ball> v;
	bool flag;

public:
	Process()
	{
		int n;
		cin >> n;
		v.resize(n);


		for (Ball& it : v)
		{
			it.isDelete = false;
			cin >> it.color;
		}

		start();
	}


	int solve() const
	{
		int ans = 0;
		for (const auto& it : v)
		{
			if (it.isDelete) ++ans;
		}
		return ans;
	}


private:

	//В const методах можно вызывать только const методы
	void start()
	{
		flag = true;
		while (flag)
		{
			flag = false;

			int count = 0;
			Ball ball;
			for (int i = 0; i < v.size(); ++i)
			{
				if (v[i].isDelete) continue;

				//if (v[i] == ball)
				if (v[i].color == ball.color)
				{
					count++;
				}
				else
				{
					if (count >= 2)
					{
						int j = i - 1;
						for (; count >= 0; --j)
						{
							if (v[j].isDelete) continue;
							deleteBall(j);
							count--;
						}
					}
					count = 0;
					ball = v[i];
				}


			}

			if (count >= 2)
			{
				int j = v.size() - 1;
				for (; count >= 0; --j)
				{
					if (v[j].isDelete) continue;
					deleteBall(j);
					count--;
				}
			}

		}

	}

	void deleteBall(int i)
	{
		v[i].isDelete = true;
		flag = true;
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

	//for (Ball& it : v)
	//{
	//	auto& [delet, c] = it;

	//	delet = false;
	//	cin >> c;
	//}


	Process test1Process;


	cout << test1Process.solve() << "\n";

	//cout << test2Process.solve() << "\n";

	//cout << test3Process.solve() << "\n";



	return 0;
}