#include "Empregado.hpp"


// Operacao:
double Empregado::pagamentoDia(double horasTrabalhadas) {

     double totalDeHorasTrabalhadas = horasTrabalhadas;
     int jornadaNormalDeTrabalho = 8;
     int divisorHoraExtra = 2;

	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > jornadaNormalDeTrabalho) {
        double hora_extra = horasTrabalhadas - jornadaNormalDeTrabalho;
        totalDeHorasTrabalhadas += hora_extra / divisorHoraExtra;
      }
	  return totalDeHorasTrabalhadas * salarioHora;
    }