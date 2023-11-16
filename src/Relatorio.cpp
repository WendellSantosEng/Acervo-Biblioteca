#ifndef RELATORIO_H
#define RELATORIO_H

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

    void Relatorio::imprimirRelatorio(){
        Biblioteca::imprimirBiblioteca();

        cout << "Departamento responsavel: " << getDepartamento() << endl;
    }

#endif