#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <string>

int main () {

    // Insere Engenheiros
    Engenheiro eng1 ("Joao Snow", 35, 9.5, 3);
    Engenheiro eng2 ("Daniela Targaryen", 30, 8, 1);
    Engenheiro eng3 ("Bruno Stark", 30, 8, 2);

    // Insere Vendedores
    Vendedor vend1 ("Tonho Lannister", 20, 6, 5000);
    Vendedor vend2 ("Jose Mormont", 25, 8, 3000);
    Vendedor vend3 ("Sonia Stark", 30, 8, 4000);

    // Imprime Engenheiros
    eng1.imprimeEngenheiro();
    eng2.imprimeEngenheiro();
    eng3.imprimeEngenheiro();

    // Imprime Vendedores
    vend1.imprimeVendedor();
    vend2.imprimeVendedor();
    vend3.imprimeVendedor();

    return 0;

} // fim do metodo main
