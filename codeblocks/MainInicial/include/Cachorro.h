#include <string>
#include<iostream>
#include "Mamifero.h"
#include "SerVivo.h"
using namespace std;

#ifndef CACHORRO_H
#define CACHORRO_HS

class Cachorro:public Mamifero, public SerVivo
{
    public:

      int idade;
      std::string raca;

      Cachorro();
      virtual ~Cachorro();
      void Latir();
      void setNome(string n)
        {
            nome = n;
        }

        string getNome()
        {
            return nome;
        }

    protected:

    private:
        std::string nome;
};

#endif // CACHORRO_H
