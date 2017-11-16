/*
 * principal.cpp
 *
 *  Created on: 11 de nov de 2017
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


	int *p1 = new int(5);

	//Shallow copy
	int *p2 = p1;


//	 * O problema da shallow copy é na deleção, qdo se deleta a cópia, o objeto que foi copiado também foi deletado
//	 * e se o objeto copiado for utilizado aí vai se apresentado um comportamento indefinido.
//	 *
//	 * Isso pq não foi alocado memória para o objeto copiado, aí nesse caso tem q ir para o Deep Copy.
//	 *
//	 * O Deep copy aloca memória para a cópia e então copia o valor real e então a cópia vive na memória distinta da origem.
//	 *
//	 * http://www.learncpp.com/cpp-tutorial/915-shallow-vs-deep-copying/

	//deep copy : copia o endereço do ponteiro
	int *p3 = new int(*p1);


	Integer i(5);

	Integer i2(i);

	//qdo faz assim: i = i2 está fazendo uma shallow copy que, o operator assigment(=) vai ser a implementação padrão, já
	//que não tem uma implementação específica

	std::cout << i.GetValue() << std::endl;

	Integer a(1), b(3);
	a.SetValue(Add(a, b).GetValue());

	std::cout << "\n" << std::endl;
	auto c(a);


	auto c1(std::move(a));
//	depois do move q chama o move assigment dá pau se fizer o cout
//	../src/principal.cpp:76:12: error: cannot bind ‘std::basic_ostream<char>’ lvalue to ‘std::basic_ostream<char>&&’
	std::cout << " a = " << a << std::endl;
	Process(std::move(a));


	Integer a3 { 5 };

	// essa conversão só é permitida por conta do operator int
//	int z3 = a3;//funciona sem explicit

//	qdo tem a palavra error explicit na função operator int() : cannot convert ‘Integer’ to ‘int’ in initialization
//	Se tiver explicity então static_cast<int>
	int z3 = static_cast<int>(a3);//obrigatoriamente tem q fazer o cast qdo tem tem explicit

	return 0;
}


