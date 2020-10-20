#include "Vendedor.hpp"

Vendedor::Vendedor(std::string nome_, double salarioHora_, double quotaMensalVendas_){
		nome = nome_;
		salarioHora = salarioHora_;
		quotaMensalVendas =   quotaMensalVendas_; 
	} 
double Vendedor::quotaTotalAnual() {
	int mesesDoAno = 12;
  	return quotaMensalVendas * mesesDoAno;
	}

std::string Vendedor::getNome(){
	return nome;
}

double Vendedor:: getQuotaMensalVendas (){
	return quotaMensalVendas;
}
double Vendedor:: getSalarioHora (){
	return salarioHora;
}