#include "Vendedor.hpp"
#include "Empregado.hpp"
#include <iostream>
#include <string>

Vendedor::Vendedor(std::string _nome, double _salarioHora, double _horasTrabalhadas, double _quotaMensalVendas){

    setNome(_nome);
	setSalarioHora(_salarioHora);
	setHorasTrabalhadas(_horasTrabalhadas);
	setQuotaMensalVendas(_quotaMensalVendas);

} // fim do construtor de Vendedor


void Vendedor::setNome (std::string _nome) {
	this->nome = _nome;
} // fim do metodo setNome


void Vendedor::setSalarioHora (double _salarioHora) {
	this->salarioHora = _salarioHora;
} // fim do metodo setSalarioHora


void Vendedor::setHorasTrabalhadas (double _horasTrabalhadas) {
	this->horasTrabalhadas = _horasTrabalhadas;
} // fim do metodo setHorasTrabalhadas

void Vendedor::setQuotaMensalVendas (double _quotaMensalVendas) {
	this->quotaMensalVendas = _quotaMensalVendas;
} // fim do metodo setQuotaMensalVendas

std::string Vendedor::getNome () {
	return this->nome;
} // fim do metodo getNome


double Vendedor::getHorasTrabalhadas () {
	return this->horasTrabalhadas;
} // fim do metodo getHorasTrabalhadas


double Vendedor::getQuotaTotalAnual() {

	return quotaMensalVendas * 12;

}


void Vendedor::imprimeVendedor () {

    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Quota vendas: " << getQuotaTotalAnual() << std::endl;
    std::cout << std::endl;


} // fim do metodo imprimeVendedor
