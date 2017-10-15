#include<iostream>
#include"Visual.h"

using namespace std;

void Visual::Janela()
{
    int i;

    //Linhas horizontais

    cout << "\n";

    for(i = 0; i < 70; i++)
    {
       cout << "-";
    }

    cout << "\n";

}

void Visual::Rotulos()
{
    cout << "Programa para calculo de area" << "\n\n";

    cout << "Escolha uma das opcoes abaixo para calculo de area ou qualquer tecla para sair:\n\n";

    cout << "\n Quadrado [1] \n Triangulo [2] \n Paralelogramo [3] \n Losango [4] \n Retangulo [5] \n Circulo [6]\n";
}
