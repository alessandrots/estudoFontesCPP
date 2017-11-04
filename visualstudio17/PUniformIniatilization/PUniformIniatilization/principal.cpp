#include <iostream>

int add(int *s1, int *s2) 
{
	return *s1 + *s2;
}

void add2(int *s1, int *s2, int *result) 
{
	*result = *s1 + *s2;
}

void swap(int *s1, int *s2)
{
	int z = 0;
	int *temp = &z;
	*temp = *s1;
	*s1 = *s2;
	*s2 = *temp;
}

int main() {
	// Scalar types
	int i{ 0 };
	using namespace std;

	cout << "i = " << i << endl;
	char ch{ 'a' };
	bool flag = true;
	unsigned int x{ 2344 };
	float f{ 123.32f };
	double d{ 8324.1324 };

	int arr[5] = { 1,2,3,4,5 };
	initializer_list<int> list{ 1,2,3,4,5 };

	for (int x : {1, 2, 3}) {
		cout << "lista 1 = " << x << endl;
	}

	cout << "\n ";

	for (int x : list)
	{
		cout << "lista inicializada = " << x << endl;
	}
	int y = 10;
	cout << " add y  " << &y << endl;

	int *ptr = &y;
	cout << " ptr  " << ptr << endl;

	

	//a void point pode apontar para diferentes tipos de variáveis
	void *ptr1 = &x;
	int *ptr2 = nullptr;
	cout << " ptr1 " << ptr1 << endl;
	//cout << " ptr2 " << *ptr2 << endl;dar pala

	int valor1 = 10;
	int valor2 = 25;

	int *p1 = &valor1;
	int *p2 = &valor2;

	int res1 = add(p1, p2);
	cout << " \n " << res1 << endl;

	int res2 = add(&valor1, &valor2);
	cout << " \n " << res2 << endl;

	int result, result2;
	int *pResult = &result;


	add2(&valor1, &valor2, pResult);

	cout << " \n pResult = " << pResult << " = " << *pResult << endl;

	add2(&valor1, &valor2, &result2);

	cout << " \n pResult = " << &result2 << " = " << result2 << endl;

	int vl1 = 11;
	int vl2 = 26;

	cout << " \n vl1 = " << vl1 << " vl2 = " << vl2 << endl;

	swap(&vl1, &vl2);

	cout << " \n vl1 = " << vl1 << " vl2 = " << vl2 << endl;

	//
	int c = std::getchar();

	return 0;
}