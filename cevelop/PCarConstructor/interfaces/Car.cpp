/*
 * Car.cpp
 *
 *  Created on: 11 de nov de 2017
 *      Author: alessandrots
 */


#include "../interfaces/Car.h"

#include <iostream>

int Car::totalCount = 0;

Car::Car():Car(0) {
//	o Car(0) está chamando o construtor Car(amount) que já inicializa todas as outras variáveis

// ++totalCount;
 std::cout << "Car() : " << std::endl;
//
// fuel = 0;
// speed = 0;
// passengers = 0;
}

Car::Car(float amount):Car(amount, 0) {
	std::cout << "Car(amount) : " << std::endl;
//	o Car(amount, 0) está chamando o construtor Car(amount, pass) que já inicializa todas as outras variáveis
//	++totalCount;
//
//	fuel = amount;
//
//	speed = 0;
//	passengers = 0;
}

Car::Car(float amount, int pass) {
	std::cout << "Car(amount, pass) : " << std::endl;
	++totalCount;

	fuel = amount;

	speed = 0;
	passengers = pass;

}

void Car::FillFuel(float amount) {
	//++totalCount;
	fuel = amount;
}

void Car::Accelerate() {
	speed++;
	fuel -= 0.5f;
}

void Car::Brake() {
	speed = 0;
}

void Car::AddPassengers(int count) {
	passengers = count;
}

void Car::Dashboard() {
	std::cout << "Fuel level : " << fuel << std::endl;
	std::cout << "Speed : " << speed << std::endl;
	std::cout << "Passengers : " << passengers << std::endl;
}

Car::~Car() {
	--totalCount;
	std::cout << "Car() : " << std::endl;
}


