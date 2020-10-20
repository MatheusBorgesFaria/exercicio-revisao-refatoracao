#include "Engenheiro.hpp"
#include "Vendedor.hpp"

void printEngenheiro (Engenheiro & engenheiro, double horas){
  std::cout << "Nome: " << engenheiro.getNome() << std::endl;
  std::cout << "Salario Mes: " << engenheiro.pagamentoDia(horas) << std::endl;
  std::cout << "Projetos: " << engenheiro.getProjetos() << std::endl;
  std::cout << std::endl;
}

void printVendedor(Vendedor & vendedor, double horas){
  std::cout << "Nome: " << vendedor.getNome() << std::endl;
  std::cout << "Salario Mes: " << vendedor.pagamentoDia(horas) << std::endl;  
  std::cout << "Quota vendas: " << vendedor.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}

int main() {
  //_______________________ Engenheiros_______________________ 
  //Ao se declarar um objeto do tipo engenheiro e passado 3 atributos nesta ordem:
  // Nome, Salario por hora e o numeroo de projetos
  Engenheiro engenheiro_1 ("Joao Snow", 35, 3);
  double horasTrabalhadasengenheiro_1 = 9.5;
  printEngenheiro(engenheiro_1, horasTrabalhadasengenheiro_1);
  
  Engenheiro engenheiro_2("Daniela Targaryen", 30, 1);
  double horasTrabalhadasengenheiro_2 = 8.0;
  printEngenheiro(engenheiro_2, horasTrabalhadasengenheiro_2);
  
  Engenheiro engenheiro_3 ("Bruno Stark", 30, 2);
  double horasTrabalhadasengenheiro_3 = 8.0;
  printEngenheiro(engenheiro_3, horasTrabalhadasengenheiro_3);
  
  //_______________________ Vendedores_______________________ 
  //Ao se declarar um objeto do tipo vendedor e passado 3 atributos nesta ordem:
  // Nome, Salario por hora e a quota mensal de vendas
  Vendedor vendedor1("Tonho Lannister", 20, 5000);
  double horasTrabalhadasVendedor_1 = 6.0;
  printVendedor(vendedor1, horasTrabalhadasVendedor_1);
  
  Vendedor vendedor_2("Jose Mormont", 25, 3000);
  double horasTrabalhadasVendedor_2 = 8.0;
  printVendedor(vendedor_2, horasTrabalhadasVendedor_2);

  Vendedor vendedor_3("Sonia Stark", 30, 4000);
  double horasTrabalhadasVendedor_3 = 8.0;
  printVendedor(vendedor_3, horasTrabalhadasVendedor_3);

  return 0;	
}