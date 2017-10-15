#include<iostream>
#include "Areas.h"
#include "Visual.h"

using namespace std;

#ifndef ESCOLHA_H
#define ESCOLHA_H


class Escolha:public Areas
{
private:
    int Numero;

public:

    void setNumero(int n)
    {
        Inicio:

        cin >> n;

        switch(n)
        {
        case 1 :
             Areas::Quadrado();
             cout << "\n\n";
             goto Inicio;
             break;

        case 2 :
            Areas::Triangulo();
            cout << "\n\n";
            goto Inicio;
            break;

        case 3 :
            Areas::Paralelogramo();
            cout << "\n\n";
            goto Inicio;
            break;

        case 4 :
            Areas::Losango();
            cout << "\n\n";
            goto Inicio;
            break;

        case 5 :
            Areas::Retangulo();
            cout << "\n\n";
            goto Inicio;
            break;

        case 6 :
            Areas::Circulo();
            cout << "\n\n";
            goto Inicio;
            break;

        default :
            cout << "Adeus";


        }
    }

    int getNumero()
    {
        return Numero;
    }

};

#endif // ESCOLHA_H
