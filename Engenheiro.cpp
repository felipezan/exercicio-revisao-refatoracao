#include "Empregado.hpp"
#include "Engenheiro.hpp"
#include <iostream>
#include <string>


Engenheiro::Engenheiro(std::string _nome, double _salarioHora, double _horasTrabalhadas, int _projetos){

	setNome(_nome);
	setSalarioHora(_salarioHora);
	setHorasTrabalhadas(_horasTrabalhadas);
	setProjetos(_projetos);

} // fim do construtor de Engenheiro


void Engenheiro::setNome (std::string _nome) {
	this->nome = _nome;
} // fim do metodo setNome


void Engenheiro::setSalarioHora (double _salarioHora) {
	this->salarioHora = _salarioHora;
} // fim do metodo setSalarioHora


void Engenheiro::setHorasTrabalhadas (double _horasTrabalhadas) {
	this->horasTrabalhadas = _horasTrabalhadas;
} // fim do metodo setHorasTrabalhadas


void Engenheiro::setProjetos (int _projetos) {
	this->projetos = _projetos;
} // fim do metodo setProjetos


std::string Engenheiro::getNome () {
	return this->nome;
} // fim do metodo getNome


int Engenheiro::getProjetos () {
	return this->projetos;
} // fim do metodo getProjetos


double Engenheiro::getHorasTrabalhadas () {
	return this->horasTrabalhadas;
} // fim do metodo getHorasTrabalhadas


void Engenheiro::imprimeEngenheiro () {

    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Projetos: " << getProjetos() << std::endl;
    std::cout << std::endl;

} // fim do metodo imprimeEngenheiro
