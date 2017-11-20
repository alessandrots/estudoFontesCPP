#include <iostream>
#include "../interfaces/Savings.h"
#include "../interfaces/Checking.h"
#include "../interfaces/Transaction.h"
#include <typeinfo>
int main()
{
	Checking ch("Bob", 100, 0.05f);
	Transact(&ch);

	Account *p = &ch;

	const std::type_info &ti = typeid(*p);

	if (ti == typeid(Savings)) {
		std::cout << "p points to savings object " << std::endl;
	} else {
		std::cout << "Not pointing to savings object" << std::endl;
	}

    return 0;
}
 
