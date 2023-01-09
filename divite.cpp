//#include "divite.h"
//#include <vector>
// 
//»нкапсул€ци€ данных
//
//using namespace std;
//
//Divite::Divite()
//{
//	sum = 0;
//	max_num = 1;
//}
//
//
//vector<Divite> Divite::cont(int n)
//{
//	vector<Divite> vd;
//	for (int i = max_num; i <= n; ++i)
//	{
//		Divite d = *this; // this это указатель на текущий объект
//
//		d.pushNumber(i);
//
//		auto it = d.cont(n - i);
//
//		/*for (int j = 0; j < it.size(); ++j)
//			vd.push_back(it[j]);*/
//
//		if ((it.size() == 0) && (n - i == 0))
//		{
//			vd.push_back(d);
//
//		}
//		else
//		{
//			vd.insert(vd.end(), it.begin(), it.end());
//		}
//	}
//	
//
//
//
//
//
//	return vd;
//}
//
//
//void Divite::pushNumber(int _num)
//{
//	num.push_back(_num);
//
//	max_num = _num;
//
//	sum += _num;
//}
//
//
//
//void Divite::outDivite(std::ostream& out) const
//{
//	for (int i = 0; i < num.size(); ++i)
//	{
//		if (i > 0) out << " ";
//		out << num[i];
//	}
//	out << "\n";
//}
//
//
////bool Divite::cmp(Divite l, Divite r) const			// friend
////{
////	/*if (l.num > r.num)
////	{
////		return true;
////	}
////	return false;*/
////
////	return (l.num > r.num);
////}
//
//bool Divite::operator<(Divite r)			// friend
//{
//	/*if (l.num > r.num)
//	{
//		return true;
//	}
//	return false;*/
//
//	return (num > r.num);
//}