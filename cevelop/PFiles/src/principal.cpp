/*
 * principal.cpp
 *
 *  Created on: 19 de nov de 2017
 *      Author: alessandrots
 */
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

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

struct Record {
	int id;
	char name[10];
};

void WriteRecord(Record *p) {
	std::ofstream binstream {"records", std::ios::binary | std::ios::out };

	binstream.write((const char *)p, sizeof(Record));
}

Record getRecord() {
	std::ifstream input{"records", std::ios::binary | std::ios::in};
	Record r;
	input.read((char*)&r, sizeof(Record));
	return r;
}

//write read struct

int main () {
	Record r;

	r.id = 1001;
	strcpy(r.name, "Alessandro");

	WriteRecord(&r);

	std::cout << "\n " << std::endl;

	Record r2 = getRecord();

	std::cout << "Record ==> id = " << r2.id << " NAME = " << r2.name << std::endl;
	return 0;
}

//write read string
//int main () {
//	std::ofstream textstream {"data"};
//	textstream << 12345678;
//
//	std::ofstream binstream {"binary.bin", std::ios::binary | std::ios::out };
//
//	int num { 12345678};
//	binstream.write((const char*)&num, sizeof(num));
//	binstream.close();
//
//	std::ifstream input{"binary", std::ios::binary | std::ios::in};
//	input.read((char*)&num, sizeof(num));
//
//	std::cout << num << std::endl;
//	return 0;
//}

//WRITE and READ
//int main () {
//	FILE SYSTEM LIBRARY
//	Write();
//	Read();
//	return 0;
//}

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


