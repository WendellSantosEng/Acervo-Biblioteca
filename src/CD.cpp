#include "CD.h"

    CD::CD(string titulo, string autor, int ano, string duracao, string idioma, int num_faixa) : Midia(titulo, autor, ano, duracao, idioma){

    }

    CD::CD(){

    }

    CD::~CD(){

    }
    
    int CD::getNum_Faixa(){
        return num_faixa;
    }

    void CD::setNum_Faixa(int num_faixa){
        this->num_faixa = num_faixa;
    }

void CD::imprimirBiblioteca() {
    Midia::imprimirBiblioteca();

    // Imprimir informações do CD
    cout << "| Numero de faixas: " << getNum_Faixa();
    cout << string(20 - to_string(getNum_Faixa()).length(), ' ') << "|" << endl;
    
    cout << "+---------------------------------------+" << endl;
}
