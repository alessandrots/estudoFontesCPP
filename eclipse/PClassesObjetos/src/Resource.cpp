/*
 * Resource.cpp
 *
 *  Created on: 28/05/2016
 *      Author: alessandrots
 */

#include "Resource.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Resource::Resource(string n): name(n) {
	cout << "constructing " << name << endl;

}

Resource::~Resource(void) {
	cout << "destructing " << name << endl;
}
