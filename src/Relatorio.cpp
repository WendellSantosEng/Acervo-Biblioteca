#include "Relatorio.h"
    
    Relatorio::Relatorio(string titulo, string autor, int ano, string departamento) : Biblioteca(titulo, autor, ano){
        
    }

    Relatorio::Relatorio(){
        
    }

    Relatorio::~Relatorio(){
        
    }

    string Relatorio::getDepartamento(){
        return departamento;
    }

    void Relatorio::setDepartamento(string departamento){
        this->departamento = departamento;
    }

void Relatorio::imprimirBiblioteca() {
    Biblioteca::imprimirBiblioteca();

    // Imprimir informações do relatório
    cout << "| Departamento responsavel: " << getDepartamento();
    cout << string(20 - getDepartamento().length(), ' ') << "|" << endl;

    cout << "+---------------------------------------+" << endl;
}
