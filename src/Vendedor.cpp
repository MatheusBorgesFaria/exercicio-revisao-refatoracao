#include "Vendedor.hpp"
Vendedor::Vendedor(std::string nome_, double salarioHora_, double quotaMensalVendas_){
		//Empregado::Empregado(nome_,salarioHora_);
		quotaMensalVendas =   quotaMensalVendas_; 
	} 
double Vendedor::quotaTotalAnual() {
  	return quotaMensalVendas * 12;
	}


