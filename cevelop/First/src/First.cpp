//============================================================================
// Name        : First.cpp
// Author      : alessandro.santos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Car.h"
using namespace std;


int main() {
	/*
	Car myCar;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	cout << " referencia object CAR "<< &myCar << endl;
	*/
	//char buff[512];
	//cout << "What is your name?";


	/*
	There's a better way to do it. Check the
	lecture on std::strings if you're curious :)
	*/
	//cin.getline(buff, 64, '\n');
	//cout << "Your name is:" << buff << endl;

	//int age ;
	//cin >> age ;

	Car car(4);

	Car c(5);
	c.Dashboard();

	Car c1,c2;

	car.Dashboard();

	car.ShowCount();

	return 0;
}
