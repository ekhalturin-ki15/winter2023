#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main()
{
#ifdef _DEBUG
	ios_base::sync_with_stdio(0); cin.tie(0);
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif
    string s = "32523543525252";


	string::npos;
	18446744073709551615;
	cout << s.find("52");

	cout << s.find("52", s.find("52") + 1);
	
	cout << s.find("52", s.find("52", s.find("52") + 1) + 1);

	if (s.find("52") != string::npos)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}



}