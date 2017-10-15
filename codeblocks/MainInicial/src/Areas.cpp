#include<iostream>
#include"Areas.h"

using namespace std;

void Areas::Quadrado()
{
    float Lado,Resultado;
    cout << "Digite o valor de um dos lados do quadrado\n\n";
    cin >> Lado;
   Resultado = Lado * Lado;
    cout << "\nA area do quadrado e : " << Resultado;
}

void Areas::Circulo()
{
    float const PI = 3.14;
    float Raio, Resultado;
    cout << "Digite o valor do Raio do Circulo\n";
    cin >> Raio;

    Resultado = PI*(Raio*Raio);

    cout << "\nA area do Circulo e : " << Resultado;
}

void Areas::Losango()
{
    float D1, D2, Resultado;
    cout << "Digite o valor da Diagonal 1 do Losango\n";
    cin >> D1;
    cout << "Digite o valor da Diagonal 2 do Losango\n";
    cin >> D2;

    Resultado = (D1*D2)/2;

    cout << "\nA area do Losango e : " << Resultado;
}

void Areas::Paralelogramo()
{
    float Base, Altura, Resultado;
    cout << "Digite o valor da Base do Paralelogramo\n";
    cin >> Base;
    cout << "Digite o valor da Altura do Paralelogramo\n";
    cin >> Altura;

    Resultado = (Base*Altura);

    cout << "\nA area do Paralelogramo e : " << Resultado;
}

void Areas::Retangulo()
{
    float Base, Altura, Resultado;
    cout << "Digite o valor da Base do Retangulo\n";
    cin >> Base;
    cout << "Digite o valor da Altura do Retangulo\n";
    cin >> Altura;

    Resultado = (Base*Altura);

    cout << "\nA area do Retangulo e : " << Resultado;
}

void Areas::Triangulo()
{
    float Base, Altura, Resultado;
    cout << "Digite o valor da Base do triangulo\n";
    cin >> Base;
    cout << "Digite o valor da Altura do triangulo\n";
    cin >> Altura;

    Resultado = (Base*Altura)/2;

    cout << "\nA area do triangulo e : " << Resultado;
}
