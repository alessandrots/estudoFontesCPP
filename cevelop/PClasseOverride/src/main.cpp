/*
 * main.cpp
 *
 *  Created on: 18 de nov de 2017
 *      Author: alessandrots
 */
#include <iostream>
#include <typeinfo>

class Document {
public:
//	virtual void Serialize(float version) {
//		std::cout << "Document::Serialize" << std::endl;
//	}

//	aqui torna uma função pura virtual (pure virtual function)
	/**
	 * Isso torna a classe abstrata e a mesma não pode ser instanciada
	 */
	virtual void Serialize(float version) = 0;
};

class Text: public Document {
public:
	/**
	 * Nesse caso aqui esse Serialize não sobrecarrega o da classe pai,
	 * pq para sobrecarregar tem q ter os mesmos parâmetros
	 *
	 * Isso pode ser visto, se no caso colocar a keyword override neste método da classe filha
	 * Qdo tiver parâmetro diferente, vai dar erro em tempo de compilação
	 *
	 *  error: ‘void Text::Serialize(int)’ marked override, but does not override
  	 * void Serialize(int version)override {
  	 *
  	 * override está ligado a keyword virtual.. só pode ter override na classe filha se tiver virtual na classe pai
  	 * o erro q dá
  	 * ../src/main.cpp:31:7: error: ‘void Text::Serialize(float)’ marked override, but does not override
  	 * void Serialize(float version)override {
  	 *
	 */
//	void Serialize(float version)override final {
	void Serialize(float version)override {
		std::cout << "Text::Serialize" << std::endl;
	}
};

class RichText: public Text {
public:
	/**
	 * Se tiver o final no método na classe pai, então não pode ter override  e nem sobrecarregar na classe filha:
	 *
	 * Erro:
	 * ../src/main.cpp:41:7: error: virtual function ‘virtual void RichText::Serialize(float)’
  void Serialize(float version)override {
       ^
../src/main.cpp:34:7: error: overriding final function ‘virtual void Text::Serialize(float)’
  void Serialize(float version)override final {
	 */
	void Serialize(float version)override {
		std::cout << "RichText::Serialize" << std::endl;
	}
};

class XML: public Document {
public:
//como a classe é abstrata aqui obrigatoriamente tem que implementar o método, senão gera o erro abaixo:
	/**
	 * ../src/main.cpp:84:6: error: cannot declare variable ‘xml’ to be of abstract type ‘XML’
	  XML xml;
		  ^
	../src/main.cpp:63:7: note:   because the following virtual functions are pure within ‘XML’:
	 class XML: public Document {
		   ^
	../src/main.cpp:19:15: note: 	virtual void Document::Serialize(float)
	  virtual void Serialize(float version) = 0;
	 */
	void Serialize(float version)override {
		std::cout << "XML::Serialize" << std::endl;
	}

};


class A{
public:
    void CallA(){}
} ;
class B : public A{
} ;


void Write(Document *p) {
	p->Serialize(1.1f);
}

int main() {
	Text t;
	RichText rt;
	Document &doc = rt;
	doc.Serialize(1.2f);

	Document *pDocument = &rt;
	pDocument->Serialize(1.2f);

//	cast no sentido inverso (downcasting)
//	RichText *rtDocument = static_cast<RichText*> (pDocument);

	XML xml;
	Write(&xml);

	B b ;
	A *a = &b ;
	std::cout << typeid(*a).name() << std::endl ;

	return 0;
}
