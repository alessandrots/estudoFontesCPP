//#include "stdafx.h"
#include <iostream>
#include "Utility.h"

using std::cout;
using std::endl;

bool isPrime(int x)
{
	bool prime = true;
	for (int i = 2; i <= x / i; i=i+1)
	{
		int factor = x / i;
		if (factor*i == x) 
		{
			cout << "factor found " << factor << endl;
			prime = false;
		}
	}

	return prime;
}

bool is2MorePrime(int x)
{
	x = x + 2;

	return isPrime(x);
}
