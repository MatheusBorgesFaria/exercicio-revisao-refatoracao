#include "Engenheiro.hpp"
#include "Vendedor.hpp"

void printEngenheiro (Engenheiro & eng, double horas){
  std::cout << "Nome: " << eng.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng.pagamentoMes(horas) << std::endl;
  std::cout << "Projetos: " << eng.getProjetos() << std::endl;
  std::cout << std::endl;
}

int main() {
  Engenheiro eng1 ("Joao Snow", 35, 3);
  printEngenheiro(eng1, 9.5);
  
  
  Engenheiro eng2("Daniela Targaryen", 30, 1);
  printEngenheiro(eng2, 8);
  
  Engenheiro eng3 ("Bruno Stark", 30, 2);
  printEngenheiro(eng3, 8);
  
  /*
  Vendedor vend1("Tonho Lannister", 20, 5000);

  
  std::cout << "Nome: " << vend1.nome << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor vend2("Jose Mormont", 25, 3000);

  
  std::cout << "Nome: " << vend2.nome << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor vend3("Sonia Stark", 30, 4000);
  
  std::cout << "Nome: " << vend3.nome << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;  
  */
  return 0;	
}