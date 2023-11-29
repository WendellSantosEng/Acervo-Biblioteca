#include "Fita.h"

    Fita::Fita(string titulo, string autor, int ano, string duracao, string idioma, string formato) : Midia(titulo, autor, ano, duracao, idioma){

    }

    Fita::Fita(){

    }

    Fita::~Fita(){

    }

    string Fita::getFormato(){
        return formato;
    }


    void Fita::setFormato(string formato){

        if(formato == "1"){
            this->formato = "VHS" ;
        }else if(formato == "2"){
            this->formato = "Cassete";
        }else{
            this->formato = "NAO LISTADO";
        }
    }


    void Fita::imprimirBiblioteca(){
        Midia::imprimirBiblioteca();

        cout << "Formato: " << getFormato() << endl;
    }
