#include<iostream>
using namespace std;

//extern
//são variávei globais que permite ao programar referenciar variáveis q estejam em outros arquivos de código.
extern int Variavel01;
void Mensagem()
{
    cout<< "A variavel extern tem o valor de : " << Variavel01;
}
