
#include "Engenheiro.hpp"

//Construtor:
Engenheiro::Engenheiro (std::string nome_, double salarioHora_, int projetos_){
      nome = nome_;
      salarioHora = salarioHora_;
      projetos = projetos_;
  	} 

//Metodos para recuperar atributos:
std::string Engenheiro::getNome(){
      return nome;
}

int Engenheiro::getProjetos(){
      return projetos;
}

double Engenheiro::getSlarioHora(){
      return salarioHora;
}