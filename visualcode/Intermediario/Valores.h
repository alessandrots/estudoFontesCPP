class Tempo
{

public:
  Tempo(int = 0, int = 0);

  //função de inicio
  void setTempo(int, int);
  void setHora(int);
  void setMinuto(int);

  //função para pegar valores
  int getHora() const;
  int getMinuto() const;

  // função de impressão
  void impressao() const;

private:
  int hora;
  int minuto;
};