#include <iostream>
#include <cmath>
#include <sstream>

#include <vector>


#include <set>

using namespace std;



class R
{


	int t; 
	R()
	{

	}

};


int f(int a, int b)
{

	return 3;
}



template <typename T>
int f(float b, T c)
{
	c <<= 10;

	return 8;
}


struct Q
{
	int a;



	int E(int q)
	{


		return 10;
	}




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

	Q qqq;

	qqq.E(10);

	int q[1000]; // [0  1000)

	int* w = nullptr; // nullptr указатель в никуда

	qq(0);


	if (w)
	{



	}
	else
	{
		w = new int[100];



	}



	if (w)
		delete[] w;



	vector<int> v(100);

	v[1];

	v.resize(10);

	v.assign(100, -1);



	return 0;
}