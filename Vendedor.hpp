#ifndef VENDEDOR
#define VENDEDOR

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

    public:
        Vendedor(std::string _nome, double _salarioHora, double _horasTrabalhadas, double _quotaMensalVendas);
        void imprimeVendedor();
        void setNome (std::string _nome);
        void setSalarioHora (double _salarioHora);
        void setHorasTrabalhadas (double _horasTrabalhadas);
        void setQuotaMensalVendas (double _quotaMensalVendas);
        std::string getNome ();
        double  getHorasTrabalhadas ();
        double getQuotaTotalAnual();

    protected:
        double quotaMensalVendas;

};

#endif
