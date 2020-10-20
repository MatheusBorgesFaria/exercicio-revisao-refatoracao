#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  //Atributos
  protected:
    std::string nome; 
    double salarioHora;

  //Metodos
  public:  
    double pagamentoDia(double horasTrabalhadas) ;
    ~Empregado(){};
};
#endif