/*
 * main.cpp
 *
 *  Created on: 18 de nov de 2017
 *      Author: alessandrots
 */
#include <iostream>
#include <string>

class Stream {
	std::string m_Filename;
public:
	Stream (const std::string &filename){
		std::cout << "Stream (const std::string &filename) " << std::endl;
	}
	const std::string & GetFileName()const {
		return m_Filename;
	}
	~Stream() {
		std::cout << "~Stream " << std::endl;
	}
};

class OutputStream: virtual public Stream {
	std::ostream &out;
public:
	OutputStream (std::ostream &o, const std::string &filename) :out(o), Stream(filename){
		std::cout << "OutputStream " << std::endl;
	}
//	std::ostream & operator <<(std::string &data){
//		out << data;
//		return out;
//	}
	std::ostream & operator <<(const std::string &data) {
	        out << data;
	        return out;
	    }
	~OutputStream() {
		std::cout << "~OutputStream " << std::endl;
	}
};

class InputStream: virtual public Stream {
	std::istream &in;
public:
	InputStream (std::istream &i, const std::string &filename) :in(i), Stream(filename){
		std::cout << "InputStream " << std::endl;
	}
	std::istream & operator >> (std::string &data){
		in >> data;
		return in;
	}
	~InputStream() {
		std::cout << "~InputStream " << std::endl;
	}
};

class IOStream: public OutputStream, public InputStream {
public:
	IOStream (const std::string &filename) :OutputStream(std::cout, filename),InputStream(std::cin, filename),
	Stream(filename){
		std::cout << "IOStream " << std::endl;
	}
	~IOStream() {
		std::cout << "~IOStream " << std::endl;
	}

};

int main() {
	IOStream stream("doc.txt");

//	std::string data;
//	stream >> data;
//	stream << data;

	stream << stream.GetFileName() << std::endl;

	return 0;
}

