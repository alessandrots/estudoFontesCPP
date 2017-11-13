#include "Car.h"
#include <iostream>

int Car::totalCount = 0;

Car::Car() {
	++totalCount;
	this->fuel = 0;
	this->speed = 0;
	this->passengers = 0;
}
Car::Car(float amount) {
	++totalCount;
	fuel = amount;
	this->speed = 0;
	this->passengers = 0;
}
void Car::FillFuel(float amount) {
	fuel = amount;
}

void Car::Accelerate() {
	this->speed++;
	this->fuel -= 0.5f;
}

void Car::Brake() {
	speed = 0;
}

void Car::AddPassengers(int count) {
	passengers = count;
}

void Car::Dashboard()const {
	std::cout << "Fuel level : " << fuel << std::endl;
	std::cout << "Speed : " << speed << std::endl;
	std::cout << "Passengers : " << passengers << std::endl;
}

void Car::ShowCount() {
	std::cout << "Total CARS : " << totalCount << std::endl;
}

Car::~Car() {
	--totalCount;
}
