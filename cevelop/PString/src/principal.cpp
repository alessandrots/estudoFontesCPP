/*
 * principal.cpp
 *
 *  Created on: 15 de nov de 2017
 *      Author: alessandrots
 */
#include <iostream>
#include <cstring> //C Style
#include <string>

//para trabalhar com as classes de string
#include <sstream>

using namespace std;

/**
 * Trabalhando com strings no formato raw, utilizando cstring q é lib do C.
 * é complexo e error prone
 */
const char * combine(const char *pFirst, const char *pLast) {
	char *fullname = new char[strlen(pFirst) + strlen(pLast) + 1];//o último caracter é string null terminated
	strcpy (fullname, pFirst);
	strcat (fullname, pLast);

	return fullname;
}

void usingStandardString();

void concatenateCStyle();

void concatenateCPlusPlus();

std::string combine2(const std::string &first, const std::string &last);

void workingLibIsStream();

int main () {
//	char first[15];
//	char last[15];
//
//	std::cout << "Please, enter first name: ";
//	std::cin.getline(first, 15);
//
//	std::cout << "Please, enter last name: ";
//	std::cin.getline(last, 15);
//
//	const char * pFullName = combine(first, last);
//
//	std::cout << " pFullName = " << pFullName << std::endl;
//
//	//	usa o array para garantir a deleção de um char ou um aray
//	delete[] pFullName;

//	concatenateCStyle();

//concatenateCPlusPlus();

workingLibIsStream();


}

void concatenateCStyle() {
	char first[15];
	char last[15];

	std::cout << "Please, enter first name: ";
	std::cin.getline(first, 15);

	std::cout << "Please, enter last name: ";
	std::cin.getline(last, 15);

	const char * pFullName = combine(first, last);

	std::cout << " pFullName = " << pFullName << std::endl;

	//	usa o array para garantir a deleção de um char ou um aray
	delete[] pFullName;
}

void concatenateCPlusPlus() {
	std::string first;
	std::string last;

	std::cout << "Please, enter first name: ";
	std::getline(std::cin,first);

	std::cout << "Please, enter last name: ";
	std::getline(std::cin,last);

	std::string fullname = first + " " + last;

	std::cout << " fullname = " << fullname << std::endl;

	std::string fullname2 = combine2(first, last);

	printf("%s", fullname2.c_str());//voltando raw string
}

std::string combine2(const std::string &first, const std::string &last) {
	std::string fullname = first + " " + last;
    return fullname;
}

void usingStandardString() {
	//	Initialize e assign
		std::string s = "Hello";

	//	access
		s[0] = 'W';
		char ch = s[0];

		//muitos operadores já são sobrecarregados
		std::cout << s << std::endl ;
		std::cout << ch << std::endl ;

		std::cin >> s;

	//	para ler a linha inteira
		std::getline(std::cin, s);


	//	Size
		s.length();
	//	Insert e Concatenate
		std::string s1 { "Hello"}, s2 {"World"} ;
	//	std::string s1 { "Hello"};
	//	std::string s2 {"World"} ;
		s = s1 + " " + s2;

		s += s1;

		s.insert(6, " teste");

	//	Comparision
		if (s1 > s2) {

		}

	//	Removal
		s.erase();
		s.clear();

	//	apagando os cinco primeiros caracteres
		s.erase(0, 5);


	//	Search
		auto pos = s.find("World", 0);

	//	senão encontrar nada volta uma string npos
		if(pos != std::string::npos) {
			//FOUND
		}
}

void workingLibIsStream() {

//	std::istringstream is;//read string
//	std::ostringstream os;//write string
	int a{5}, b{6};
	int sum = a + b;

	std::stringstream ss;//read and write
//	criando uma stringbuffer
	ss << "sum  of  " << a << " & " << b << " is : " << sum << std::endl;

	//transformando para string
	std::string s = ss.str();

	std::cout <<" string buffer 1 = " << s << std::endl;

//	ss.str(""); //para limpar o conteúdo da string buffer

	ss << sum;//adicionando mais coisa no string buffer

	auto ssum = ss.str();

	std::cout << "string buffer 2 = " << ssum << std::endl;

	std::string data = "12 89 21";

	int a1;

	std::stringstream ss1;

	std::cout << "\n fazendo um split \n "<< std::endl;
	ss1.str(data);

	while (ss1 >> a1) {
		//(!ss1.fail()) {
//		ss1 >> a1;//extract the number
		std::cout << a1 << std::endl;
	}

	int x = std::stoi("54");
	std::cout << "\n str to int = " << x << std::endl;

}

/**
 *
 * Exercicio 1
 * The std::string function does not provide any function to convert the underlying string to upper case or lower case. Write two functions that provide this behavior. Both functions return a copy of the converted string. In case of error, return an empty string.

std::string ToUpper(const std::string &str) ;
std::string ToLower(const std::string &str) ;
Hint : Use toupper & tolower from C string library.
 *
 * toupper(__c)
   tolower(__c)

 * Exercicio 2
 * The find function in std::string uses a case-sensitive search. Write a function that also performs a case insensitive search. Use an enum to decide between case-sensitive and case-insensitive search.

* The prototype of the function is:

* enum class Case{SENSITIVE, INSENSITIVE};

size_t Find(
 const std::string &source,         //Source string to be searched
 const std::string &search_string,  //The string to search for
 Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
 size_t offset = 0 ) {                //Start the search from this offset
     //Implementation

     return position of the first character
     of the substring, else std::string::npos
}
Note that, we don't have direct access to the raw string inside std::string.
 */

