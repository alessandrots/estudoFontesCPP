/*
 * principal.cpp
 *
 *  Created on: 19 de nov de 2017
 *      Author: alessandrots
 */
#include <iostream>
#include <limits>
#include <stdexcept>

void ProcessRecords(int count) {
	 int *pArray = (int *) malloc(count * sizeof(count));

	 if (pArray == nullptr ){
//		 std::cout << "Failed to allocate memory " << std::endl;
		 throw std::runtime_error("Failed to allocate memory");
	 }

	 for (int i = 0; i < count; ++i) {
		pArray[i] = i;
	 }



	 free(pArray);
}

int main() {
	try {
//		trava o Linux todooo
//		ProcessRecords(std::numeric_limits<int>::max());
	} catch (std::runtime_error &rex) {
		std::cout << rex.what() << std::endl;
	}

	return 0;
}



