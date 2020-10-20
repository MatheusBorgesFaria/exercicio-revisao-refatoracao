
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private: 	  
	  double quotaMensalVendas; 

	public:
	Vendedor(std::string nome_, double salarioHora_, double quotaMensalVendas_);
	double quotaTotalAnual();
    ~Vendedor(){};
};

