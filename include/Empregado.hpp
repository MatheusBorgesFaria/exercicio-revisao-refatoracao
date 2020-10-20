#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  protected:
    std::string nome; 
    double salarioHora;
  public:  
    double pagamentoMes(double horasTrabalhadas) ;
};
#endif