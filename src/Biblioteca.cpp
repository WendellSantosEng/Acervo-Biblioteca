#include "Biblioteca.h"

    Biblioteca::Biblioteca(string titulo, string autor, int ano){

    }
    Biblioteca::Biblioteca(){

    }
    Biblioteca::~Biblioteca(){

    }



    string Biblioteca::getTitulo(){
        return titulo;
    }
    string Biblioteca::getAutor(){
        return autor;
    }
    int Biblioteca::getAno(){
        return ano;
    }



    void Biblioteca::setTitulo(string titulo){
        this->titulo = titulo;
    }

    void Biblioteca::setAutor(string autor){
        this->autor = autor;
    }

    void Biblioteca::setAno(int ano){
        this->ano = ano;
    }

    void Biblioteca::imprimirBiblioteca(){
    
    // Imprimir borda superior
    cout << "\n+---------------------------------------+" << endl;

    // Imprimir informações da classe mãe
    cout << "| Titulo: " << getTitulo();
    cout << string(31 - getTitulo().length(), ' ') << "|" << endl;
    cout << "| Autor: " << getAutor();
    cout << string(32 - getAutor().length(), ' ') << "|" << endl;
    cout << "| Ano: " << getAno();
    cout << string(34 - to_string(getAno()).length(), ' ') << "|" << endl;
    }