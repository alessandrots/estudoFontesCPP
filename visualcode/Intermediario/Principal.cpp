#include <iostream>
#include <stdlib.h>

using namespace std;

//g++ -Wall -o myprog myprog.cpp

#include "Valores.h"

//Iniciar Dados
Tempo::Tempo(int hr, int min)
{
  setTempo(hr, min);
}

void Tempo::setTempo(int h, int m)
{
  setHora(h);
  setMinuto(m);
}

//iniciar o valor da hora
void Tempo::setHora(int h)
{
  hora = (h >= 0 && h < 24) ? h : 0;
}

void Tempo::setMinuto(int m)
{
  minuto = (m >= 0 && m < 60) ? m : 0;
}


// Pegar valor de hora e minuto
int Tempo::getHora() const
{
  return hora;
}

int Tempo::getMinuto()const
{
  return minuto;
}


//Imprimir a hora
void Tempo::impressao() const
{
  cout << (hora < 10 ? "0" : "") << hora << ":" << (minuto < 10 ? "0" : "") << minuto;
}

int main()
{
  Tempo exemplo2(10, 10);
  const Tempo exemplo(12, 10);

  //pega hora const
  exemplo.getHora();
  exemplo2.setHora(2);

  //exemplo2.getHora();

  exemplo.impressao();

  cout << "\n\n";
  exemplo2.impressao();
  cout << "\n\n";

  system("pause");

  return 0;
}