//#include "stdafx.h"
#include "Tweeter.h"
#include <iostream>
/*
inicializando com base na classe Pai e o ultimo parametro com base na initializer syntax
*/
Tweeter::Tweeter(std::string firstn,
	std::string lastn,
	int number,
	std::string handle): Person(firstn, lastn, number), twitterhandle(handle)
{
	std::cout << "constructing twetter" << twitterhandle << std::endl;
}
Tweeter::~Tweeter()
{
	std::cout << "destructing twetter" << std::endl;
}
