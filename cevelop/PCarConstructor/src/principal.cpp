/*
 * principal.cpp
 *
 *  Created on: 11 de nov de 2017
 *      Author: alessandrots
 */
#include <iostream>
#include <string>

#include "../interfaces/Car.h"

using namespace std;

class Integer {
	int m_value{0};

public:
//	Integer() {
//		//nao vamos precisar de constructor default é só inicializar o atributo com a chave m_value{0}

//
//		O código não vai compilar por conta do Integer i1, pq não tem construtor default
	// o erro q vai ser mostrado:
	//	../src/principal.cpp:29:2: note:   candidate expects 1 argument, 0 provided
	//	../src/principal.cpp:14:7: note: constexpr Integer::Integer(const Integer&)

//		//mas como já tem um construtor abaixo, o construtor default não vai ser criado
//		//por isso tem q fazer a declaração e usar a keyword default

//	}

	Integer() = default;//construtor default

	Integer(int value) {
		m_value = value;
	}

//	default implementation para copy constructor
//	Integer (const Integer &) = default;

//	Para dizer ao compilador para não sintetizar o copy constructor temos que usar a keyword delete
	Integer (const Integer &) = delete;

//	delete pode ser usado para funções também, no caso abaixo não queremos setar pontos flutantes
//	../src/principal.cpp:49:7: note: void Integer::SetValue(float) <deleted>
//	  void SetValue(float) = delete;
	void SetValue(int value) {
		m_value = value;
	}

	void SetValue(float) = delete;
};

int main() {

	Car car;

	Integer i1;

	Integer i2(3);

//	Nesse caso isso aqui vai dar erro, pq tô definindo lá em cima que não deve ter o copy constructor, qdo coloco a palavra delete
//	../src/principal.cpp: In function ‘int main()’:
//	../src/principal.cpp:55:15: error: use of deleted function ‘Integer::Integer(const Integer&)’
//	  Integer i3(i2);
	i1.SetValue(8);
//	vai dar erro para buildar: devido ao mesmo problema acima, foi usado o delete para não ter esta função para ponto flutuante
//	i1.SetValue(8.1)
	return 0;
}



