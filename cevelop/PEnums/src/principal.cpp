/*
 * principal.cpp
 *
 *  Created on: 15 de nov de 2017
 *      Author: alessandrots
 */
#include <iostream>
#include <string>
using namespace std;

//O ideal é definir a classe dentro do escopo com a keyword class
//para não ter choque de com outros enumns com o mesmo nome,
//mas aí para referenciar tem q usar o namespace
enum class Color {RED, GREEN, BLUE};

enum class TrafficLight : char{RED= 'c', GREEN, BLUE};

enum class Color2 : long {RED = 8, GREEN, BLUE};

void FillColor(Color color) {
	if (color == Color::RED) {
		std::cout << "RED" << std::endl;
	}

	if (color == Color::GREEN) {
		std::cout << "GREEN" << std::endl;
	}

	if (color == Color::BLUE) {
		std::cout << "BLUE" << std::endl;
	}
}

void FillTrafficLight(TrafficLight color) {
	if (color == TrafficLight::RED) {
		std::cout << "RED" << std::endl;
	}

	if (color == TrafficLight::GREEN) {
		std::cout << "GREEN" << std::endl;
	}

	if (color == TrafficLight::BLUE) {
		std::cout << "BLUE" << std::endl;
	}
}

int main() {
	Color c = Color::RED;
	FillColor(c);

	c = Color::GREEN;
	FillColor(c);

	c = Color::BLUE;
	FillColor(c);

	FillColor(Color::GREEN);

	FillColor(static_cast<Color>(2));

	int x = static_cast<int>(2);

	FillTrafficLight((static_cast<TrafficLight>('c')));

	return 0;
}
