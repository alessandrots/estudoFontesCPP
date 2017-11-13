/*
 * principal.cpp
 *
 *  Created on: 4 de nov de 2017
 *      Author: alessandrots
 */

#include <iostream>
#include <string>
using namespace std;

auto main() -> int
{
    auto add_two([](auto x, auto y){ return x + y; });

    cout << add_two("I"s, "t"s) << " works!" << endl;
}



