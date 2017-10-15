#include <iostream>
#include <string>
#include "./include/Cachorro.h"
#include "./include/Exemplo.h"
#include "./include/Escolha.h"
#include "./include/Visual.h"

#define MSG "Oi PESSOAR 1 ..."
#define MSG1 "Oi PESSOAR 2 ..."
#define NUM 46

#line 14 "Struct e Funcoes"

using namespace std;

  struct Funcionarios{

    string Nome;
    int Idade;
    string Profissao;

  };

void soma2()
{
    int Num1 = 50;
    int Num2 = 8;

    int Resultado = Num1 + Num2;

    cout << "O resultado da soma e : " << Resultado << "\n";
}

void ponteiroMatrizes()
{
    int x[] = {5,6};

    cout<< "\n\n X = "<< x << "\n";
    cout << "X + 1 = " << x + 1 << "\n";
    cout <<"* X = " << *x << "\n";
    cout <<"* (X + 1) = " << *(x + 1 ) <<"\n";
}

void ponteiroMatrizes2() {
    int x[] = {5,6};

    cout<< "\n\n X = "<< x << "\n";
    cout << "X + 1 = " << x + 1 << "\n";
    cout <<"* X = " << *x << "\n";
    cout <<"* (X + 1) = " << *(x + 1 ) <<"\n";

    cout << "Agora vamos subtrair 1 da variavel X";
    cout << "\n (X + 1) = "<< x + 1;
    cout << "\n (X + 1)-1 = "<< (x + 1)-1;
    cout << "\n (X + 1) = "<< *x + 2;
    cout << "\n (X + 1)-1 = "<< *(x + 1)-2;
}

void forPonteiroMatriz() {

   int x[] = {10,20,30,40,50};
   int *ponteiro;

    cout << "\n\n Ponteiro de Matrizes";
   for (ponteiro = x; ponteiro <= &x[2]; ponteiro++) {
        cout << "\n = " << *ponteiro;
    }
}

void forPonteiroMatrizAlfa() {

   char alfa[] = {'a','b','c','d','e','f','g','h','i','j','k'};

   //char *ponteiro = alfa;

   char *ponteiro = &alfa[3];

   int i;

   cout << "\n\n Ponteiro de Matrizes - ALFA";
   for (i =0; i <8; i++) {
        cout << "\n = " << *(ponteiro++);
   }
}

/**
* lembrando q o ++ e -- tem precedencia sobre o *
*
*/
void incrementoPonteiros()
{

    int Valor[4] = {10,20,30,40};
    int *ponteiro = &Valor[0];

    cout << "\n\n" <<  *ponteiro << "\n";

    *ponteiro++;

    cout << *ponteiro << "\n";

    *ponteiro++;

    cout << *ponteiro << "\n";
}

void incrementoPonteiros2()
{

    int Valor[4] = {10,20,30,40};
    //int *ponteiro = &Valor[0];

    int *ponteiro = Valor;

    cout << "\n\n" <<  *ponteiro << "\n";

    *ponteiro++;

    cout << *ponteiro << "\n";

    *ponteiro++;

    cout << *ponteiro << "\n";
}

void myUnDef()
{

    int i;
    for(i=0; i < 5; i++)
    {
        cout << "Vamos imprimir a diretiva MSG : "<< MSG << "\n\n";
    }

    if(i == 5)
    {
        #undef MSG
        cout << "MSG nao existe mais"<< "\n\n";
    }
}

//variaveis com classe armazenamento register tem a funcao de solicitar ao compilador que armazene
//seus dados em registradores CPU e não na memória... as operações com elas vão ser bem mais rápidas
//que o comum

void Troca(int *Valor1, int *Valor2)
{

    int Temporaria = *Valor1;

    *Valor1 = *Valor2;

    *Valor2 = Temporaria;

}

void defineMacroIf() {
    #if NUM == 100
        cout << NUM << " " << "realmente e o valor de NUM\n\n";

    #elif NUM < 100 && NUM > 50

       cout << NUM << " "<< "e menor que 100 e maior que 50\n\n";

    #elif NUM < 50 && NUM > 0

      cout << NUM << " "<< "e maior que 0 e menor que 50 \n\n";

    #else

      cout << NUM << " " << "esta em uma faixa de valor nao acessivel\n\n";

    #endif // NUM

}

void usarIfDevIfnDef()
{

   #ifdef NUM

    cout << "O macro NUM foi declarado com o valor de : "<< NUM <<"\n\n";

   #endif // NUM

   #undef NUM

   #ifndef NUM

    cout<< "O macro NUM nao foi declarado\n\n";

   #endif // NUM
}

//o auxilio da classe extern conseguimos usar a Variavel01 sem precisarmos declara-lá novamente
int Variavel01 = 100;

const float Gravidade = 9.78;

//https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
void soma();

void Mensagem();

void myregister();

void loopContinue();

void structFuncionarios();

void ponteiro1();

void chamarCachorro();

int main(int argc, char *argv[]){

    cout << "\n Linha = "<< __LINE__<<" Arquivo = "<< __FILE__;

    cout << "\n\n Nos temos como argumento o numero " << argc << " " << argv[0] << "\n";

    cout << "Vamos imprimir a diretiva MSG : "<< MSG1 << "\n\n";

    std::cout << "Oi Mundao!";

    myUnDef();

    defineMacroIf();

    usarIfDevIfnDef();

    int var1 = 10;
    int var2 = 20;

    float resultado = (float) var1/ var2;

    float resultado2 =  var1/ var2;


    std::cout << resultado << "  e " << resultado2 << "\n";

    soma();
    soma();
    soma();
    soma();
    soma2();

    Mensagem();

    myregister();

    std::cout << "\n const Gravidade = "<< Gravidade << "\n";


   enum Semana
   {
       segunda,
       terca,
       quarta,
       quinta,
       sexta,
       sabado,
       domingo
   };

   Semana d;

   d = Semana(0);

   if(d == segunda)
   {
        cout << "Hoje e segunda feira";
   }

   enum Exemplo
    {
      Valor1 = 5,
      Valor2,
      ValorN
    };

    Exemplo e;
    e = Exemplo(1);

    cout << "\n Exemplo = " << "\n" << Valor1;

    cout << "\n Exemplo = " << "\n" << e;

    int Captmes = 2;

    switch(Captmes){

      case 1 :
      cout << "Janeiro";
      break;

      case 2 :
      cout << "Fevereiro";
      break;


      case 3 :
      cout << "Marco";
      break;

      default:
      cout << "Escolha um mes valido";

    }



 /*
    char Operacao;
    int numero;


    cout << "\n Operacao: ";
    cin >> Operacao;
    cout << "\n numero: ";
    cin >> numero;

    switch(Operacao)
    {
        case '*':
        switch(numero)
        {
            case 0:
            cout << "Erro";
            break;
        }
        break;
    }
    */

    loopContinue();

    int i;
    int numero[5] = {1,2,3,4,5};

    cout << "A posicao 2 tem o seguinte valor : " << numero[2] << "\n";

    numero[2] = 10;

    cout << "O novo valor da posicao 2 e : " << numero[2] << "\n";

    for(i = 0; i < 5; i++)
    {
        cout << numero[i] << "\n";
    }


    structFuncionarios();

    int var3 = 50;
    int var4 = 20;

    cout << "ANTES \n";
    cout << var3 << "\n";
    cout << var4 << "\n";

    Troca(&var3,&var4);

    cout << "DEPOIS \n";
    cout << var3 << "\n";
    cout << var4 << "\n";

    ponteiro1() ;

    ponteiroMatrizes();

    ponteiroMatrizes2();

    forPonteiroMatriz();

    incrementoPonteiros();

    incrementoPonteiros2();

    forPonteiroMatrizAlfa();

    chamarCachorro();

    //************************
    Visual v;

    v.Janela();
    v.Rotulos();

    Escolha esc1;

    esc1.setNumero(esc1.getNumero());

    v.Janela();

    //
    return 0;
}


/**
*
* FUNCOES IMPLEMENTADAS
*/


void soma() {

  static int x = 0;
  x = x + 1;

  std::cout << x << "\n";
}

#include<iostream>
using namespace std;

void myregister()
{
    register int Variavel = 50;
    cout << "O valor da variavel register e : " << Variavel;
}

void loopContinue() {

    int contagem = 0;

    while(contagem < 50)
    {
        contagem++;
        cout << contagem << "\n";
        if(contagem == 25)
        {
            cout << "Vamos continuar ate o numero 40\n";
            continue;
        }

        if(contagem == 40)
        {
            cout << "Paramos em : " << contagem << "\n";
            break;

        }
    }
}

void structFuncionarios()
{

    struct Funcionarios Estagiarios = {"Marcos",22,"Analista de sistemas"};

    cout << Estagiarios.Nome << " " << Estagiarios.Idade << " " << Estagiarios.Profissao << "\n";
}

void ponteiro1() {
    int Valor = 5;

    //aqui declara um ponteiro para inteiro e colocar e faz a variável de ponteiro
    //apontar para o endereço de uma outra variável
    int *ponteiro = & Valor;

    //as duas linhas de baixo são resumidas na linhas de cima
    int *ponteiro1;
    ponteiro1 = &Valor;

    cout << "\n *ponteiro = " << *ponteiro;
    cout << "\n ponteiro = " << ponteiro;

     cout << "\n *ponteiro1 = " << *ponteiro1;
    cout << "\n ponteiro1 = " << ponteiro1;
}

void chamarCachorro()
{
    //criando uma instância do tipo Cachorro com o nome de vl, é isso mesmo para criar um objeto,
   //o processo é o mesmo de declaração de uma variável comum.
   Cachorro vl;

   vl.setNome("Toto");
   vl.idade = 2;
   vl.raca = "Vira Lata";
   vl.especime = "MAMIFERO - CACHORRO1";

   cout << "\n O meu cachorro se chama "<< vl.getNome() << " ele tem "
   << vl.idade << " anos de idade sendo da raca " << vl.raca << "\n ESPECIME: "<< vl.especime;

   vl.Latir();
   cout << "\n\n";

   Cachorro Doberm;

   Doberm.setNome("Leao");
   Doberm.idade = 3;
   Doberm.raca = "Doberman";
   vl.especime = "MAMIFERO - CACHORRO2";

   cout << "\n O meu cachorro se chama "<< Doberm.getNome() << " ele tem "
   << Doberm.idade << " anos de idade sendo da raca " << Doberm.raca << "\n ESPECIME: "<< vl.especime;

   Doberm.Latir();
   Doberm.mamar();
   cout << "\n\n";

   Exemplo x;

}

