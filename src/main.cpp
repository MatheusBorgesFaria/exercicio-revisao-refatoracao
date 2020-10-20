#include "Engenheiro.hpp"
#include "Vendedor.hpp"

void printEngenheiro (Engenheiro & engenheiro, double horas){
  std::cout << "Nome: " << engenheiro.getNome() << std::endl;
  std::cout << "Salario Mes: " << engenheiro.pagamentoMes(horas) << std::endl;
  std::cout << "Projetos: " << engenheiro.getProjetos() << std::endl;
  std::cout << std::endl;
}

void printVendedor(Vendedor & vendedor, double horas){
  std::cout << "Nome: " << vendedor.getNome() << std::endl;
  std::cout << "Salario Mes: " << vendedor.pagamentoMes(horas) << std::endl;  
  std::cout << "Quota vendas: " << vendedor.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}

int main() {
  //Engenheiros
  Engenheiro engenheiro1 ("Joao Snow", 35, 3);
  printEngenheiro(engenheiro1, 9.5);
  
  Engenheiro engenheiro2("Daniela Targaryen", 30, 1);
  printEngenheiro(engenheiro2, 8);
  
  Engenheiro engenheiro3 ("Bruno Stark", 30, 2);
  printEngenheiro(engenheiro3, 8);
  
  //Vendedores  
  Vendedor vendedor1("Tonho Lannister", 20, 5000);
  double horasTrabalhadasVendedor_1 = 6.0;
  printVendedor(vendedor1, horasTrabalhadasVendedor_1);
  
  Vendedor vendedor2("Jose Mormont", 25, 3000);
  double horasTrabalhadasVendedor_2 = 8.0;
  printVendedor(vendedor2, horasTrabalhadasVendedor_2);

  Vendedor vendedor3("Sonia Stark", 30, 4000);
  double horasTrabalhadasVendedor_3 = 8.0;
  printVendedor(vendedor3, horasTrabalhadasVendedor_3);

  return 0;	
}