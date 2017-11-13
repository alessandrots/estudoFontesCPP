/*
 * Integer.cpp
 *
 *  Created on: 11 de nov de 2017
 *      Author: alessandrots
 */

#include "../interfaces/Integer.h"
#include <iostream>
#include <memory>

Integer::Integer() {
	std::cout << "Integer()" << std::endl;
	m_pint = new int(0);
}

Integer::Integer(int value) {
	std::cout << "Integer(int)" << std::endl;
	m_pint = new int(value);
}

Integer::Integer(const Integer &obj) {
	std::cout << "Integer(const Integer &obj)" << std::endl;
	m_pint = new int(*obj.m_pint);
}

Integer::Integer(Integer && obj) {
	std::cout << "Integer(int&&)" << std::endl;
	m_pint = obj.m_pint;
	obj.m_pint = nullptr;
}


int Integer::GetValue()const {
	return *m_pint;
}

void Integer::SetValue(int value) {
	*m_pint = value;
}

Integer::~Integer() {
	std::cout << "~Integer()" << std::endl;
	delete this->m_pint;
}

//Comentando para utilizar a função membro de overloading + que está no principal +
Integer Integer::operator+(const Integer & a) const {
	Integer temp;

	//*temp.m_pint = *m_pint + *a.m_pint;
	std::cout << "\n m_pint = " << m_pint << std::endl;
	std::cout << "\n *m_pint = " << *m_pint << std::endl;
	std::cout << "\n a = " << a.GetValue() << std::endl;
	*temp.m_pint = *m_pint + *a.m_pint;
	return temp;
}

Integer & Integer::operator++() {
	++(*m_pint);
	return *this;
	// TODO: insert return statement here
}

Integer Integer::operator++(int) {
	Integer temp(*this);
	++(*m_pint);
	return temp;
}

bool Integer::operator ==(const Integer &obj)const {
	return *m_pint == *obj.m_pint;
}

//para evitar shallow copy
Integer & Integer::operator =(const Integer &a) {
	std::cout << "\n operator &a = " << &a << std::endl;

	std::cout << "\n operator *a.m_pint = " << *a.m_pint << std::endl;

	if (this != &a) {
		delete m_pint;
		m_pint = new int(*a.m_pint);
	}

	return *this; //return  by reference
}

Integer & Integer::operator =(Integer &&a) {
	if (this != &a) {
		delete m_pint;
		m_pint = a.m_pint;
		a.m_pint = nullptr;
	}

	return *this; //return  by reference
}


void Integer::operator() (){
	std::cout << *m_pint << std::endl;
}
