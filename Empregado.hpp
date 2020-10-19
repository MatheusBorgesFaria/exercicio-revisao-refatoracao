#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  private:
  const double salarioHora;  
 const double quotaMensalVendas;  


    double pagamentoMes(double horasTrabalhadas) {

      double total_de_horas = horasTrabalhadas;

	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double hora_extra = horasTrabalhadas - 8;
        total_de_horas += hora_extra / 2;
      } 
	  return total_de_horas * salarioHora;
    }

};

#endif
