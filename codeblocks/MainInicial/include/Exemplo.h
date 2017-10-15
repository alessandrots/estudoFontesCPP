#include<iostream>
using namespace std;

class Exemplo{
private:

  int x,y,z;

public:

  virtual ~Exemplo();
  Exemplo(int _X = 50, int _Y = 60, int _Z = 70)
    {
       x =_X ;
       y = _Y;
       z = _Z;

       cout << x << " "<< y << " "<< z;
    }
//
};
