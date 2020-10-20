
#include "Empregado.hpp"

class Vendedor : public Empregado {
  	//Atributos
  	private: 	  
		double quotaMensalVendas; 

	//Metodos
	public:
		Vendedor(std::string nome_, double salarioHora_, double quotaMensalVendas_);
		double quotaTotalAnual();
		~Vendedor(){};
		std::string getNome();
		double getSalarioHora();
		double getQuotaMensalVendas();
};

