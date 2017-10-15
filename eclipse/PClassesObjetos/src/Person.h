#pragma once
#include <string>
#include <memory>
#include "Resource.h"
#ifndef _PERSON_H
#define _PERSON_H
class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbirtrarynumber;
	//Resource* pResource;
	std::shared_ptr<Resource> pResource;//com shared pointer não precisa de copy constructor, compartilhando o mesmo recurso

public:
	Person(std::string firstn,
		std::string lastn,
		int number);
	//Person(const Person& p);
	~Person();
	std::string GetName();
	//essas aqui embaixo sao inline functions definidas no HeaderFile
	int GetNumber() { return arbirtrarynumber; }
	void setNumber(int number) { arbirtrarynumber = number; }
	void setFirstName(std::string  n) {firstname = n;}
	bool operator<(Person& p);
	bool operator<(int i);
	friend bool operator<(int i, Person& p);
	//Person& operator=(const Person& p);
	void AddResource();
	std::string GetResourceName() const {
		return pResource->GetName();
	}
};
bool operator<(int i, Person& p);
#endif // !_PERSON_H
