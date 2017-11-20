/*
 * principal.cpp
 *
 *  Created on: 19 de nov de 2017
 *      Author: alessandrots
 */
#include <iostream>
#include <string>
#include <fstream>

void Write() {
	std::ofstream out { "/home/alessandrots/Projetos/outros/files-cpp/data.txt"};

	out << "Hello World " << std::endl;

	out << 10 << std::endl;

	out.close();
}

void Read() {
	std::ifstream input { "/home/alessandrots/Projetos/outros/files-cpp/data.txt"};

//	std::ifstream input;
//	input.open("/home/alessandrots/Projetos/outros/files-cpp/data.txt");

//	if (!input.is_open()) {
//		std::cout << "Arquivo Inexistente... " << std::endl;
//		return;
//	}

	if (input.fail()) {
		std::cout << " Could not open failed " << std::endl;
		return;
	}

	std::string message;

	std::getline(input, message);

	int value{};

	input >> value;

//	input >> value;
//	if (input.fail()) {
//		std::cout << " Nao pode ser lido " << std::endl;
//		return;
//	}

	if (input.eof()) {
		std::cout << " final do arquivo encontrado. " << std::endl;
		return;
	}

	if (input.good()) {
		std::cout << " I/O operations sucesso " << value << std::endl;
	} else {
		std::cout << " Some I/O operations are failed " << value << std::endl;
	}

	input.close();

	std::cout << message << " : " << value << std::endl;
}



int main () {
//	FILE SYSTEM LIBRARY
	Write();
	Read();
	return 0;
}

//int main () {
////	/**
////	 * RAW String literals
////	 * R
////	 * R MSG
////	 */
////	std::string filename{R"(/home/alessandrots/Projetos/outros/files-cpp)"};
////	std::cout << "filename " << filename << std::endl;
////
////	std::string message{R"MSG(C++ Introduced filesystem API "(In C++11")MSG"};
////
////	std::cout << "message " << message << std::endl;
//
////	FILE SYSTEM LIBRARY
//
//	return 0;
//}


