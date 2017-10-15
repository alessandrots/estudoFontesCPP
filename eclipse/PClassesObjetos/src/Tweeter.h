#pragma once
#include "Person.h"
class Tweeter :
	public Person
{
private:
	std::string twitterhandle;
public:
	Tweeter(std::string firstn,
		std::string lastn,
		int number,
		std::string handle);
	~Tweeter();
};

