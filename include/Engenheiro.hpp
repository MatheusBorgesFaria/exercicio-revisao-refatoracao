#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"
class Engenheiro : public Empregado {
  //Atributos
  private: 
	  int projetos;

  //Metodos
  public:
	  Engenheiro(std::string nome_, double salarioHora_, int projetos_);
    ~Engenheiro(){};
    std::string getNome();
    double getSlarioHora();
    int getProjetos();

};
#endif