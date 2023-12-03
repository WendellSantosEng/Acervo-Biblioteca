#include "Fita.h"

    Fita::Fita(string titulo, string autor, int ano, string duracao, string idioma, int formato) : Midia(titulo, autor, ano, duracao, idioma){

    }

    Fita::Fita(){

    }

    Fita::~Fita(){

    }

    int Fita::getFormato(){
        return formato;
    }


    void Fita::setFormato(int formato){

        if(formato == 1 || formato == 2){
            this->formato = formato;
        }else{
            this->formato = 1;
        }
        
    }


void Fita::imprimirBiblioteca() {
    Midia::imprimirBiblioteca();

    if(formato == 1){
        cout << "| Formato: VHS" ;
        cout << string(25 - 3, ' ') << "|" << endl;
    }else if(formato == 2){
        cout << "| Formato: CASSETE" ;
        cout << string(25 - 7, ' ') << "|" << endl;
    }else{
        cout << "Formato nao listado\n" ;
    }
    

    cout << "+---------------------------------------+" << endl;
}
