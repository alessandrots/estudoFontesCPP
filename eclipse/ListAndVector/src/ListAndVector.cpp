//============================================================================
// Name        : ListAndVector.cpp
// Author      : AlessandroTs
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <vector>
#include <list>
#include <random>
#include <iostream>
#include <algorithm>

using std::vector;
using std::list;
using std::cout;
using std::endl;

 //total overkill
#undef UNICODE
//#include <Windows.h>

using namespace std;

int main() {
	const int size=10;
	cout << "Running vector and list of " << size << " elements" << endl;

//	__int64 ctr1 = 0, ctr2 = 0, freq = 0;
//	QueryPerformanceFrequency((LARGE_INTEGER *)&freq);
//
//	QueryPerformanceCounter((LARGE_INTEGER *)&ctr1);
//
//	//vector
//	vector<int> v;
//	v.push_back(0);
//	for(int i=0;i<size;i++)
//	{
//		int r = (int) rand();
//		bool inserted=false;
//		for(auto it = begin(v); it != end(v); it++)
//		{
//			if (*it>r)
//			{
//				v.insert(it, r);
//				inserted = true;
//				break;
//			}
//		}
//		if (!inserted)
//			v.push_back(r);
//	}
//
//	//auto it = max_element(begin(v),end(v));
//	//int m = *it;
//
//	QueryPerformanceCounter((LARGE_INTEGER *)&ctr2);
//
//	double time = ((double)(ctr2 - ctr1))*1.0*1000/(double)freq;
//	cout << "vector time (ms): " << time << endl;
//
//	QueryPerformanceCounter((LARGE_INTEGER *)&ctr1);
//
//	//list
//	list<int> l;
//	l.push_back(0);
//	for(int i=0;i<size;i++)
//	{
//		int r = (int) rand();
//		bool inserted=false;
//		for(auto it = begin(l); it != end(l); it++)
//		{
//			if (*it>r)
//			{
//				l.insert(it, r);
//				inserted = true;
//				break;
//			}
//		}
//		if (!inserted)
//			l.push_back(r);
//	}
//
//	auto it2 = max_element(begin(l),end(l));
//	int m2 = *it2;
//
//	QueryPerformanceCounter((LARGE_INTEGER *)&ctr2);
//
//	time = ((double)(ctr2 - ctr1))*1.0*1000/(double)freq;
//	cout << "list time (ms): " << time << endl;

	return 0;
}
