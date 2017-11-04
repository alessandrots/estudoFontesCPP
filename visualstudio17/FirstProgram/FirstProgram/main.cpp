#include <iostream>

int Factorial(int x) {
	int result = 1;
	for (int i = 1; i <= x; i++)
	{
		result *= i;
	}

	return result;
}
int main() {
	using namespace std;
//	cout << "Hello World " << "C++" << endl;

	int i = 5;
	int result = Factorial(i);

	cout << "Factorial " << i << " eh " << result << endl;
	return 0;
}