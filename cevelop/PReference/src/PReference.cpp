//============================================================================
// Name        : PReference.cpp
// Author      : alessandro.santos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void Print(int count, char ch) {
        using namespace std;
        for (int i = 0; i < count; ++i) {
                cout << ch;
        }
        cout << endl;
}
void EndMessage() {
        using namespace std;
        cout << "End of program" << endl;
}



int main() {
	 using namespace std;
	//Referent
	int x = 10;
	//Reference
	int &ref = x;
	int y = 20;
	ref = y;
	cout << "x:" << x << endl;
	cout << "ref:" << ref << endl;


	 //Register a handler. This handler will be invoked after main returns
	 atexit(EndMessage);
	 Print(5, '#');
	 void(*pfn) (int, char) = Print;//&Print => Ampersando is optional
	 //One way to invoke function pointer
	 (*pfn)(8, '@');
	 //Another way to invoke function pointer
	 pfn(5, '+');
	 using namespace std;
	 cout << "end of main" << endl;

	return 0;
}
