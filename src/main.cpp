#include <locale>

#include "Biblioteca.h"

int main(){

    Biblioteca *biblioteca = new Biblioteca;

    biblioteca->setAno(2014);
    biblioteca->setAutor("AUTOR");
    biblioteca->setTitulo("OBRA");

    cout << "ANO: " << biblioteca->getAno() << " --- AUTOR: " << biblioteca->getAutor();
    cout << " --- TITULO: " << biblioteca->getTitulo();
    
    return 0;
}