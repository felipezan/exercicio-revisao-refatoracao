#ifndef EMPREGADO
#define EMPREGADO

#include <iostream>
#include <string>

const int JORNADA_TRABALHO_PADRAO = 8;
const int MULTIPLICADOR_HORA_EXTRA = 1.5;

class Empregado {

    public:
        double pagamentoMes(double horasTrabalhadas);

    protected:
        std::string nome;
        double salarioHora;
        double horasTrabalhadas;

};

#endif
