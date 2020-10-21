#include "Empregado.hpp"
#include <string>

class Engenheiro : public Empregado {

	public:
		Engenheiro(std::string _nome, double _salarioHora, double _horasTrabalhadas, int _projetos);
		void imprimeEngenheiro();
		void setNome (std::string _nome);
		void setSalarioHora (double _salarioHora);
		void setHorasTrabalhadas (double _horasTrabalhadas);
		void setProjetos (int _projetos);
		std::string getNome ();
		double getHorasTrabalhadas ();
		int getProjetos ();

	protected:
		int projetos;

};
