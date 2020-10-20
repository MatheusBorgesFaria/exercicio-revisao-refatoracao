#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"
class Engenheiro : public Empregado {

  private: 
	  int projetos;
    public:
	  Engenheiro(std::string nome_, double salarioHora_, int projetos_);

};
#endif