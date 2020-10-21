#include "Empregado.hpp"

// este metodo calcula e retorna o salario mensal do empregado
double Empregado::pagamentoMes (double horasTrabalhadas) {

	double salarioMensal  = horasTrabalhadas * salarioHora;

	//Calcula pagamentoMes se houve hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > JORNADA_TRABALHO_PADRAO) {
    	salarioMensal += ((horasTrabalhadas - JORNADA_TRABALHO_PADRAO) * (MULTIPLICADOR_HORA_EXTRA * salarioHora));
    }

	return salarioMensal;

} // fim do metodo pagamentoMes
