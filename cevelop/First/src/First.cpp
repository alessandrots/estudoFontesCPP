//============================================================================
// Name        : First.cpp
// Author      : alessandro.santos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Car.h"
using namespace std;


class Base{
public:
    void Foo(){
        std::cout << "Base::Foo" ;
    }
};
class Derived : public Base{
public:
    void Foo(){
        std::cout << "Derived::Foo" ;
    }
} ;

int main(){
    Derived d{} ;
    Base *b = &d ;
    b->Foo() ;
    return 0 ;
}

