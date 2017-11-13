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
/**
 * Para evitar Memory Leaks vc devemos sempre ao criar uma classe depois removê-la com delete.
 *
 * então uma solução para isso é criar um wrapper
 *
 */

class IntPtr {
	Integer *m_p;
public:
	IntPtr(Integer *p):m_p(p){

	}
	~IntPtr() {
		delete m_p;
	}

	Integer *operator ->() {
		return m_p;
	}
	Integer & operator *() {
		return *m_p;
	}
};


void Process(std::shared_ptr<Integer> ptr) {
	std::cout << "\n  " << ptr-> GetValue() << std::endl;
}

void CreateInteger() {
//	isso é um smart pointer, cria um ponteiro e automaticamente deleta o ponteiro
	IntPtr p = new Integer;

//	unique pointer é usado qdo você não quer compartihar recursos
	std::unique_ptr<Integer> p1(new Integer);

	p->SetValue(3);
	(*p).SetValue(3);

	(*p1).SetValue(3);

	std::shared_ptr<Integer> p2(new Integer);
	Process(p2);
}

void PrintConst(int *ptr) {
	using namespace std;
	cout << "PrintConst = " << *ptr << endl;
	*ptr = 700000;
	/**
	 * Se eu não declarar o parãmetro ponteiro constante eu vou poder alterar esse valor, como ocorreu aí acima
	 * isso deve ser feito para evitar mudar acidentalmente
	 * feito na função abaixo
	 */
}

void PrintConst2(const int *ptr) {
	using namespace std;
	cout << "PrintConst2 = " << *ptr << endl;
//	*ptr = 700000;//error: assignment of read-only location ‘* ptr’
	/**
	 * Se eu não declarar o parãmetro ponteiro constante eu vou poder alterar esse valor, como ocorreu aí acima
	 */
}

void PrintConst3(const int &ptr) {
	using namespace std;
	cout << "PrintConst3 = " << ptr << endl;
}

int main() {
	CreateInteger();

	const int CHUNK_SIZE = 512;
	const int *ptr = &CHUNK_SIZE;
//	*ptr = 1;//error: assignment of read-only location ‘* ptr’

//	correto então
	int x = 10;
	ptr = &x;
	std::cout << "ptr = " << ptr << std::endl;

	std::cout << "*ptr = " << *ptr << std::endl;

	int x1 = 10;
	ptr = &x1;
	std::cout << "ptr = " << ptr << std::endl;

	std::cout << "*ptr = " << *ptr << std::endl;

	const int *const ptr1 = &CHUNK_SIZE;
	PrintConst(&x);
	std::cout << "main x = " << x << std::endl;

	PrintConst2(&x);
	std::cout << "main x = " << x << std::endl;

	int z = 5;
	PrintConst3(z);
	std::cout << "main z = " << z << std::endl;

	//Pelo parâmetro da função ser constante, é possível fazer o seguinte:
	PrintConst3(1);

	return 0;
}





