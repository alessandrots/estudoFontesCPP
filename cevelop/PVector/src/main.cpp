/*
 * main.cpp
 *
 *  Created on: 15 de nov de 2017
 *      Author: alessandrots
 */

#include <iostream>
#include <vector>

using namespace std;

int main () {
//	int arr[10];
    int *ptr = new int[10];
    for (int i = 0; i < 10; ++i) {
		ptr[i] = i * 10;
	}

    std::vector<int> data{1,2,3 };
    data.push_back(4);

    for (int i = 0; i < 10; ++i) {
    	data.push_back(i * 10);
    }

    //Access
    data[0] = 100;
    for (unsigned int var = 0; var < data.size(); ++var) {
    	std::cout << "\n  pos " << var << " = "<< data[var];
	}

    std::cout << "\n  " << endl;

//    outra forma de loop
    for (auto x: data) {
    	std::cout << " " << x << "";
    }

//    para trabalhar com iterator
//    auto it = data.begin();
//    std::cout << *it;
//
//    ++it;
//
//    --it;
//
//    it = it + 5;

    //Delete
    std::cout << "\n DELECAO PRIMEIRO ELEMENTO \n";
    auto it = data.begin();
    data.erase(it);

    for (auto x: data) {
    	std::cout << " " << x << "";
    }

    //Insert elements em specific positions
    it = data.begin();
    data.insert(it, 500);

    std::cout << "\n INSERINDO NO PRIMEIRO ELEMENTO \n";

	for (auto x: data) {
		std::cout << " " << x << "";
	}


//	Add one more function called FindAll, that returns the starting indices of all the found substrings in a target string.
//	Return the indices in a vector. Support case sensitive/insensitive search.

//enum class Case{SENSITIVE, INSENSITIVE};
//
//std::vector<int>
//FindAll(
// const std::string &target,         //Target string to be searched
// std::string search_string,         //The string to search for
// Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
// size_t offset = 0) {                //Start the search from this offset
//     //Implementation

    /*
    Return indices of found strings,
    else an empty vector
    */
//}

}
