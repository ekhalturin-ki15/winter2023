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


#include <deque>
using namespace std;

int i = 0;


vector<int> pref_fib;

int fib(int n)
{

	if (pref_fib[n] != 0)
		return pref_fib[n];

	if (n == 1) return 1;
	if (n == 0) return 1;


	++i;
	pref_fib[n] = (fib(n - 1) + fib(n - 2));

	return pref_fib[n];

}



int main()
{
#ifdef _DEBUG
	ios_base::sync_with_stdio(0); cin.tie(0);
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	pref_fib.resize(21);

	cout << fib(20) <<" ";
	cout << i;

	return 0;
}
