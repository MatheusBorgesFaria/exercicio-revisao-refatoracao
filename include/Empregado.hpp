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
    Empregado(std::string nome_, double salarioHora_);
};
#endif