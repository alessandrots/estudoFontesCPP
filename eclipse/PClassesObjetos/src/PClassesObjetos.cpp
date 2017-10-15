//============================================================================
// Name        : PClassesObjetos.cpp
// Author      : AlessandroTs
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//http://stackoverflow.com/questions/9131763/eclipse-cdt-c11-c0x-support

/*
#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
*/


// ClassesAndObjects.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include "status.h"
#include <iostream>
#include "Utility.h"
#include "Resource.h"
#include <string>
#include <vector>
#include <map>
#include <algorithm>
/*
#include <chrono>
#include <ctime>
#include <complex>
#include <numeric>
#include <random>
#include <regex>
#include <math>
*/

//using std::cout;
//using std::cin;
//using std::endl;

using namespace std;

bool IsOdd (int i) {
  return ((i%2)==1);
}

bool odd (int i) {
  return (i%2);
}


void print(int i){
	std::cout << i << " ";
}

int main()
{
//	int x, y;
//	//tem q ter o default constructor
//	Person p1("Cacau", "designer", 39);
//	{
//		Tweeter p2("JV", "estudante", 9, "whoever");
//	}
//
//	bool prime = true;
//	int i = 2;
//
//	//std::cin;
//	cout << "after innermost block" << endl;
//
//	cout << "Enter two numbers: " << endl;
//
//	cin >> x >> y;
//
//	if (x > y)
//	{
//		cout << "x > y" << endl;
//	}
//	else
//	{
//		cout << "y > x" << endl;
//	}
//
//	if (x + y > 10)
//	{
//		cout << "Numbers too large" << endl;
//	}
//
//	cout << "\n GetName " << p1.GetName() << " the number is = " << p1.GetNumber() << endl;
//
//	p1.setNumber(500);
//
//	cout << "\n GetName " << p1.GetName() << " the number is = " << p1.GetNumber() << endl;
//
//	while (i < x)
//	{
//		int factor = x / i;
//		if (factor*i == x)
//		{
//			cout << "factor found " << factor << endl;
//			prime = false;
//			break;
//		}
//		i = i + 1;
//	}
//
//	cout << x << "is ";
//	if (prime)
//	{
//		cout << "prime " << endl;
//	}
//	else
//	{
//		cout << "not prime " << endl;
//	}
//
//	if (isPrime(x))
//	{
//		cout << "the value" << x << " informed is prime " << endl;
//	}
//	else
//	{
//		cout << "the value" << x << " informed is NOT prime " << endl;
//	}
//
//	if (is2MorePrime(x))
//	{
//		cout << "the value" << x << " +2 informed is prime " << endl;
//	}
//	else
//	{
//		cout << "the value" << x << " +2 informed is NOT prime " << endl;
//	}
//
//	Person p2("XXX", "xxx", 60);
//	Person p3("YYYY", "yyy", 30);
//
//	cout << " P2 " << endl;
//	if (!(p2 < p3))
//		cout << "NOT " << endl;
//	cout << "less then P3 " << endl;
//
//	cout << " P2 " << endl;
//	if (!(p2 < 300))
//		cout << "NOT " << endl;
//	cout << "less then 300 " << endl;
//
//	cout << " 300 " << endl;
//	if (!(300 < p2))
//		cout << "NOT " << endl;
//	cout << "less then P2 " << endl;
//
//
//	Status s = Pending;
//	s = Aprroved;

/*
 //Estudando o funcionamento dos ponteiros
	{
		Resource localResource("local");
		string localString = localResource.GetName();
	}

	Resource* pResource = new Resource("created with new");
	string newString = pResource->GetName();
	int j=3;
	if (j==3)
	{
		return 0;
		// Esse if aqui é prejudicial... pq, foi construído um objeto local e ele foi destruído ao sair
		// das chaves.. ai foi construído um objeto com new e com esse return ele não é destruído em lugar nenhum.
		// Isso aqui é o que gera o memory leaks. Memory leaks acontece quando você NÃO deleta uma referência.
	}

	Resource* p2 = pResource;
	string string2 = p2->GetName();
    delete pResource;
    //daqui para a frente dar erro, pq a referência foi deletada
    //string string3 = pResource->GetName();
    //pResource = nullptr;//habilitando o nullptr http://stackoverflow.com/questions/10033373/c-error-nullptr-was-not-declared-in-this-scope-in-eclipse-ide
    //delete pResource;
    //delete p2;
*/

	/*//CLASSES OK
	//Criando um Resource dentro de Person
	Person Ana("Ana", "Claudia", 345);
	Ana.AddResource();
	Ana.setFirstName("Ana2");
	Ana.AddResource();
	//Essa linha aqui pode gerar um erro pq qdo chegar no final do programa ele vai deletar o Resource de Ana
	//E como é uma cópia, ele vai deletar o mesmo Resource em Ana2, e aí que está o memory leak
	//Aí o grande lance é copiar o Person, criando um construtor específico para isso, q recebe outro person
	Person Ana2 = Ana;
	Ana = Ana2;
	string s1 = Ana.GetResourceName();
	*/

	//VECTOR OK
	std::vector<Person> vPerson;
	Person Ana("Ana", "Claudia", 345);
	Person Joao("Joao", "Victor", 123);

	vPerson.push_back(Ana);
	vPerson.push_back(Joao);

	for (std::vector<Person>::iterator it = vPerson.begin() ; it != vPerson.end(); ++it)
		    std::cout << " \n\n Pessoa = " << it->GetName()  << " ";
		std::cout << '\n';


		/**/
	/*//MAPs OK
	 * http://www.cplusplus.com/reference/map/map/map/
	 */

	//Person Ana("Ana", "Claudia", 345);
	//Person Joao("Joao", "Victor", 123);
	std::map<int, Person> people;
	/**
	 * http://stackoverflow.com/questions/36689600/how-to-call-class-member-function-from-iterator-of-map-in-c
	 * http://en.cppreference.com/w/cpp/concept/DefaultConstructible
	 */
	//people[1] = Ana;
	//people[2] = Joao;
	people.insert({Ana.GetNumber(), Ana});
	people.insert({Joao.GetNumber(), Joao});

	//A chave vai ser colocada na ordem das outras chaves
	Person third("Third Person", "NoName", 145);
		std::pair <int, Person> p(third.GetNumber(), third);

	people.insert(p);

	for (std::map<int, Person>::iterator it=people.begin(); it!=people.end(); ++it)
		std::cout << " KEY = " << it->first << " => " << it->second.GetName() << '\n';

	/**
	 * Map
	 * http://www.cplusplus.com/reference/map/map/find/
	 */
	std::map<int,Person>::iterator found = people.find(123);
	std::cout << " FOUND KEY  = " << found-> first << " Nome: "<<  found->second.GetName() << '\n';

	std::map<int,Person>::iterator found2 = people.find(145);
	std::cout << " FOUND KEY  = " << found2-> first << " Nome: "<<  found2->second.GetName() << '\n';

	auto found3 = people.find(123);
	std::cout << " FOUND KEY  = " << found3-> first << " Nome: "<<  found3->second.GetName() << '\n';

	auto found4 = people.find(145);
	std::cout << " FOUND KEY  = " << found4-> first << " Nome: "<<  found4->second.GetName() << '\n';

	/*
	std::map<char,int> first;

    first['a']=10;
    first['b']=30;
    first['c']=50;
    first['d']=70;
	*/
	std::vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);

	std::vector<int>::iterator it = std::find_if (myvector.begin(), myvector.end(), IsOdd);
	std::cout << "The first odd value is " << *it << "\n\n";

	//dereference
	auto o = std::find_if (myvector.begin(), myvector.end(), odd);
    //encontrando os ímpares depois do primeiro encontrado
	while (o != myvector.end())
	{
		std::cout << *o << " ";
		o = std::find_if (++o, myvector.end(), odd);
	}

	std::cout << "\n\n myvector contains:";
	for_each (myvector.begin(), myvector.end(), print);
	std::cout << '\n';

	std::cout << "\n\n myvector contains pos sort:";
	std::sort(myvector.begin(), myvector.end());
	for_each (myvector.begin(), myvector.end(), print);
	std::cout << '\n';

	int length = third.GetName().size();
	std::string firstfour = third.GetName().substr(0,4);
	std::cout << length << " " << firstfour;

	std::cout << '\n';
	for_each(myvector.begin(), myvector.end(), [](int n) {cout << n << " - "; });

	std::cout << '\n';
	for_each(myvector.begin(),
			 myvector.end(),
			 [](int n) {
					cout << n;
					if (n % 2 == 0){
						cout << " even " << endl;
					} else {
						cout << " odd " << endl;
					}
			});

	//transform um collection in another collection com um lambda retornando o quadrado de cada valor da coleção original
	std::cout << "\n\n V2 result transform em raiz quadrada:";
	std::vector<int> v2;
	v2.push_back(1);
	transform(myvector.begin(), myvector.end(), back_inserter(v2), [](int n) {return n*n; });
	for_each(v2.begin(), v2.end(), [](int n) {cout << n << " - "; });

	//transform um collection in another collection
	std::cout << "\n\n V2 result transform em cubo ou metade:";
	std::vector<double> vd;
	//vd.push_back(2);
	transform(myvector.begin(), myvector.end(), back_inserter(vd), [](int n) -> double {
		if (n % 2 == 0){
			return n * n * n;
		} else {
			return n / 2.0;
		}
	});
	for_each(vd.begin(), vd.end(), [](double n) {cout << n << " - "; });

	//passando parametros para o lambda
	std::cout << '\n';
	std::cout << "\n lambda com passagem de parametros :\n";
	int x = 3;
	int y = 7;
	for_each(myvector.begin(), myvector.end(), [x,y] (int n)
	{
		if (n >= x && n <= y)
			cout << n << " ";
	});

	//Capturando por valor implicitamente [=]
	std::cout << '\n';
	std::cout << "\n lambda Capturando por valor implicitamente [=] (capturing hold stack por value):\n";
	x = 2;
	y = 9;
	for_each(myvector.begin(), myvector.end(), [=] (int n)
	{
		if (n >= x && n <= y)
			cout << n << " ";
	});

	//Capturando por valor implicitamente [=]
	std::cout << '\n';
	std::cout << "\n lambda Capturando por valor e mudando localmente [=] e mudando o vetor:\n";
	x = 1;
	y = 1;
	for_each(myvector.begin(), myvector.end(), [=] (int& r)mutable
	{
		const int old = r;
		r *=2;
		x = y;
		y = old;
	});

	//imprimindo novamente o vetor, vc observa que mudou os valores, isto foi possível por conta da palavra mutable
	for_each(myvector.begin(), myvector.end(), [](int n) {cout << n << " - "; });

	//Mudando x e y também
	std::cout << '\n';
	std::cout << "\n lambda capturing by reference [&x, &y] - also changing the param (int&):\n";
	myvector.clear();
	for (int i=0; i < 10; i++) {myvector.push_back(i);}

	for_each(myvector.begin(), myvector.end(), [&x,&y] (int& r)
	{
		const int old = r;
		r *=2;
		x = y;
		y = old;
	});

	//imprimindo novamente o vetor, vc observa que mudou os valores, isto foi possível por conta da palavra mutable
	for_each(myvector.begin(), myvector.end(), [](int n) {cout << n << " - "; });

	//capturing whole stack by reference (and a neater way to keep initializing)
	std::cout << '\n';
	std::cout << "\n lambda neater way to keep initializing:\n";
	int i = 0;
	myvector.clear();
	generate_n(back_inserter(myvector), 10, [&] {return i++;});

	std::cout << "initializing" << endl;
	for_each(myvector.begin(), myvector.end(), [](int n) {cout << n << " - "; });
	std::cout << endl;
	std::cout << "i: " << i << endl;

    return 0;
}

