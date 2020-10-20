#include "Vendedor.hpp"

Vendedor::Vendedor(std::string nome_, double salarioHora_, double quotaMensalVendas_){
		nome = nome_;
		salarioHora = salarioHora_;
		quotaMensalVendas =   quotaMensalVendas_; 
	} 
double Vendedor::quotaTotalAnual() {
  	return quotaMensalVendas * 12;
	}


