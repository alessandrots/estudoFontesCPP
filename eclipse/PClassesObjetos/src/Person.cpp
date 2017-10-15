//#include "stdafx.h"
#include "Person.h"
#include <iostream>

using namespace std;//nao usar  header file
//nome da classe::nome da funcao
/*
Person::Person(std::string firstn, std::string lastn, int number)
{
	firstname = firstn;
	lastname = lastn;
	arbirtrarynumber = number;
}
essa inicializacao eh um custo alto, o idela eh usar a sintax initializer
*/
//Person::Person(std::string firstn, std::string lastn, int number): firstname(firstn), lastname(lastn),arbirtrarynumber(number)
Person::Person(string firstn, string lastn, int number) : firstname(firstn), lastname(lastn), arbirtrarynumber(number)//, pResource(nullptr)
{
	//cout << "constructing " << firstname << " " << lastname << endl;
}

//Person::Person(const Person& p) : firstname(p.firstname), lastname(p.lastname),
//		arbirtrarynumber(p.arbirtrarynumber),
//		pResource(new Resource(p.pResource->GetName()))
//{
//	//Aqui na hora de copiar o Resource, cria-se uma nova Referência para na hora da deleção de Person
//	//ser destruído a sua específica referência de Resource
//	cout << "copy Person " << firstname << " " << lastname << endl;
//}

Person::~Person() 
{
	//cout << "destructing " << firstname << " " << lastname << endl;
	//para nao ter memory leak em relacao ao Resource, so deletar a referencia
	//delete pResource;

}

string Person::GetName()
{
	return  firstname +  " " + lastname;
}

bool Person::operator<(Person & p)
{
	return arbirtrarynumber < p.arbirtrarynumber;
}

bool Person::operator<(int i)
{
	return arbirtrarynumber < i;
}

bool operator<(int i, Person & p)
{
	return i < p.GetNumber();
}

/*
 *
 */
//Person& Person::operator=(const Person & p)
//{
//	firstname = p.firstname;
//	lastname = p.lastname;
//	arbirtrarynumber = p.arbirtrarynumber;
//	delete pResource;
//	pResource = new Resource(p.pResource->GetName());
//	return *this;
//}

void Person::AddResource()
{
	//Como pResource começa com nullptr e delete em cima dele não dar pau, isso vai garantir
	//que ao adicionar um novo Resource ele sempre vai deletar o anterior.
	//delete pResource;
	//pResource = new Resource("Resource for " + GetName());

	//Para shared pointer
	pResource.reset();
	pResource=std::make_shared<Resource>("Resource for " + GetName());

}
