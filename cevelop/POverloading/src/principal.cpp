/*
 * principal.cpp
 *
 *  Created on: 12 de nov de 2017
 *      Author: alessandrots
 */

#include <iostream>
#include <string>
#include <memory>

#include "../interfaces/Integer.h"

using namespace std;

void Print(Integer i) {

}

//Integer Add(int x, int y) {
//	return Integer(x+ y);
//}

//Move semantics
Integer Add(const Integer &a, const Integer &b){
	Integer temp;
	temp.SetValue(a.GetValue() + b.GetValue());
	return temp;
}

/**
 * nesse caso aqui o compilador reclama pq tem ambiguidade
 *
 * ../src/principal.cpp:93:20: warning: ISO C++ says that these are ambiguous, even though the worst conversion for the first is better than the worst conversion for the second:
  	  Integer sum = a + b;//aqui chama o overloading
                    ^
	../src/principal.cpp:30:9: note: candidate 1: Integer operator+(const Integer&, const Integer&)
	 Integer operator +(const Integer &a, const Integer &b) {
			 ^
	In file included from ../src/principal.cpp:11:0:
	../src/../interfaces/Integer.h:23:10: note: candidate 2: Integer Integer::operator+(const Integer&) const
	  Integer operator+(const Integer & a)const;
 */
//Integer operator +(const Integer &a, const Integer &b) {
//	Integer temp;
//	temp.SetValue(a.GetValue() + b.GetValue());
//	return temp;
//}

Integer operator+(int x, const Integer &y) {
	Integer temp;
	temp.SetValue(x + y.GetValue());
	return temp;
}

std::ostream & operator<<(std::ostream & out, const Integer &a) {
	out << a.GetValue();
	return out;
}

std::istream & operator >> (std::istream &input, Integer &a){
	int x;
	input >> x;
	a.SetValue(x);
//	*a.m_pint = x;//isso só foi permitido pq no Integer.h

//	mas friend keyword é desencorajado pq permite acessar os dados internos da classe diretamente
	return input;
}

void Process(Integer val) {

}

int main() {

	//Aula de Overloading
	Integer a(1), b(3);

	Integer sum = a + b;//aqui chama o overloading

	Integer c(5);
	Integer d(7);
	std::cout << "\n sum = " << sum.GetValue() << std::endl;

	c++;
	std::cout << "\n c = " << c.GetValue() << std::endl;

	++d;
	std::cout << "\n d = " << d.GetValue() << std::endl;

	if (a == b){
		std::cout << "\n IGUAL " << std::endl;
	} else {
		std::cout << "\n NAO IGUAL " << std::endl;
	}

	c = a;
	std::cout << "\n c = " << a.GetValue() << std::endl;

	Integer sum1 = 5 + b;//aqui chama o overloading

	std::cout << "\n sum1 = " << sum1.GetValue() << std::endl;

	Integer sum2 = a + 6;//aqui chama o overloading

	std::cout << "\n sum2 = " << sum2.GetValue() << std::endl;

	std::cout << "\n sum2 = " << sum2 << std::endl;

	std::cout << "\n DIGITE O NUMERO : " << std::endl;


//	std::cin >> a;
//	std::cout << a << std::endl;

	b();


	return 0;
}





