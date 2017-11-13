/*
 * Integer.h
 *
 *  Created on: 12 de nov de 2017
 *      Author: alessandrots
 */
#include <iostream>

#ifndef INTERFACES_INTEGER_H_
#define INTERFACES_INTEGER_H_

class Integer {
	int *m_pint;
public:
	Integer();
	Integer(int value);
	Integer(const Integer &obj);
	//Move constructor
	Integer(Integer &&obj);//Senao comentar isso dar pau no overloading dos operadores
	int GetValue()const;
	void SetValue(int value);
	~Integer();

	Integer operator+(const Integer & a)const;
	Integer & operator ++();
	Integer operator ++(int);

	bool operator ==(const Integer &obj)const;
	Integer & operator =(const Integer &a);
	Integer & operator =(Integer &&a);

	void operator() ();

//se omitir a friend word a função se tornará parte da classe
//	friend std::istream & operator >> (std::istream &input, Integer &a);
	//
};



#endif /* INTERFACES_INTEGER_H_ */
