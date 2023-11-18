#include <locale>
#include <vector>

#include "Biblioteca.h"
#include "CD.h"
#include "Fita.h"
#include "Mapa.h"
#include "Midia.h"
#include "Relatorio.h"
#include "Cartaz.h"

void cadastrarItem(vector<Biblioteca *> &listBiblioteca);
void removerItem(vector<Biblioteca *> &listBiblioteca);
void pesquisarItem(vector<Biblioteca *> &listBiblioteca);
void emprestimoItem(vector<Biblioteca *> &listBiblioteca);

void cadastrarItemAcervo(); // Propriedades Gerais
void cadastrarMidia(Midia *midia); // Classe Mae Midia

void cadastrarCD(CD *cd); 
void cadastrarFita(Fita *fita);
void cadastrarMapa(Mapa *mapa);
void cadastrarCartaz(Cartaz *cartaz);
void cadastrarRelatorio(Relatorio *relatorio);

int main(){

    vector<Biblioteca *> listBiblioteca;

    int op,op2;

    do{

        cout << "Insira uma opção: " << endl;
        cout << "1 -> Cadastrar novo item no acervo\n";
        cout << "2 -> Remover item do acervo\n";
        cout << "3 -> Verificar disponibilidade de item no acervo\n";
        cout << "4 -> Realizar emprestimo\n";
        cout << "5 -> Sair da Biblioteca\n";

        cin >> op;
        cin.clear();
        fflush(stdin);

        switch(op){

            case 1:

                cadastrarItem(listBiblioteca);
                break;
            case 2:

                removerItem(listBiblioteca);
                break;
            case 3:

                pesquisarItem(listBiblioteca);
                break;
            case 4:

                emprestimoItem(listBiblioteca);
                break;
            default:

                break;
        }


        if(op < 1 || op > 5){
            cout << "Insira uma opcao valida\n";
        }

    }while(op!=5);



    /*biblioteca->setAno(2014);
    biblioteca->setAutor("AUTOR");
    biblioteca->setTitulo("OBRA");

    cout << "ANO: " << biblioteca->getAno() << " --- AUTOR: " << biblioteca->getAutor();
    cout << " --- TITULO: " << biblioteca->getTitulo();*/
    
    return 0;
    
}

void cadastrarItem(vector<Biblioteca *> &listBiblioteca){
    int op;

    do{
        cout << "Insira um valor: " << endl;
        cout << "Cadastrar qual item?\n1 - CD\n2 - Fita\n3 - Mapa\n4 - Cartaz\n5 - Relatorio\n\n6 - Voltar ao Menu Anterior";
        cout << "Insira uma opção: ";
        cin >> op;
        cin.clear();
        fflush(stdin);

        switch(op){
            case 1:
                
                cout << "        Cadastro de CD      " << endl << endl;
                CD *cd = new CD();
                cadastrarCD(cd);
                listBiblioteca.push_back(cd);
                cout << "CD cadastrado com sucesso!" << endl << endl; 

                break;
            case 2:
                
                cout<< "        Cadastro de Fita         "<< endl;
                Fita *fita = new Fita();
                cadastrarFita(fita);
                listBiblioteca.push_back(fita);
                cout << "Fita cadastrada com sucesso!" << endl << endl;

                break;
            case 3:

                cout << "       Cadastro de Mapa       " << endl;
                Mapa *mapa = new Mapa();
                cadastrarMapa(mapa);
                listBiblioteca.push_back(mapa);
                cout << "Mapa cadastrado com sucesso!" << endl << endl;

                break;
            case 4:

                cout << "       Cadastro de Cartaz      " << endl;
                Cartaz *cartaz = new Cartaz;
                cadastrarCartaz(cartaz);
                listBiblioteca.push_back(cartaz);
                cout << "Cartaz cadastrado com sucesso!" << endl << endl;

                break;
            case 5:

                cout << "       Cadastro de Relatorio" << endl;
                Relatorio *relatorio = new Relatorio();
                cadastrarRelatorio(relatorio);
                listBiblioteca.push_back(relatorio);
                cout << "Relatorio cadastrado com sucesso!" << endl << endl;

                break;
            default:

                break;
        }

        if(op < 1 || op > 6){
            cout << "Insira uma opcao correta" << endl;
        }

    }while(op != 6);

}

void cadastrarItemAcervo(Biblioteca *biblioteca){

    string titulo;
    string autor;
    int ano;

    cout << "Insira o titulo: ";
    getline(cin, titulo);
    cin.clear();
    fflush(stdin);

    cout << "Insira o autor: ";
    getline(cin, autor);
    cin.clear();
    fflush(stdin);

    cout << "Insira o ano de publicação: ";
    cin >> ano;
    cin.clear();
    fflush(stdin);

    biblioteca->setTitulo(titulo);
    biblioteca->setAutor(autor);
    biblioteca->setAno(ano);
}

void cadastrarMidia(Midia *midia){

    cadastrarItemAcervo(midia);

    string duracao;
    string idioma;

    cout << "Insira a duracao: ";
    getline(cin,duracao);
    cin.clear();
    fflush(stdin);

    cout << "Insira o idioma: ";
    getline(cin,idioma);
    cin.clear();
    fflush(stdin);

    midia->setDuracao(duracao);
    midia->setIdioma(idioma);
}

void cadastrarCD(CD *cd){
    
    cout << "   Cadastrar CD    " << endl << endl;

    int num_faixa;

    cadastrarMidia(cd);

    cout << "Insira o numero de faixas: ";
    cin >> num_faixa;
    cin.clear();
    fflush(stdin);

    cd->setNum_Faixa(num_faixa);
}

void cadastrarFita(Fita *fita){

    string formato;

    cout << "       Cadastrar Fita      " << endl << endl;

    cadastrarMidia(fita);

    cout << "Insira o formato: " << endl;
    cin >> formato;
    cin.clear();
    fflush(stdin);

    fita->setFormato(formato);
}

void cadastrarMapa(Mapa *mapa){

    cout << "       Cadastrar Mapa     " << endl <<endl;
    
    cadastrarItemAcervo(mapa);

    string escala;

    cout << "Insira a escala: ";
    getline(cin,escala);
    cin.clear();
    fflush(stdin);

    mapa->setEscala(escala);
}

void cadastrarCartaz(Cartaz *cartaz){

    cout << "       Cadastrar Cartaz     " << endl <<endl;
    
    cadastrarItemAcervo(cartaz);

    string dimensao;

    cout << "Insira a dimensao: ";
    getline(cin,dimensao);
    cin.clear();
    fflush(stdin);

    cartaz->setDimensao(dimensao);
}

void cadastrarRelatorio(Relatorio *relatorio){

    cout << "       Cadastrar Cartaz     " << endl <<endl;
    
    cadastrarItemAcervo(relatorio);

    string departamento;

    cout << "Insira a departamento: ";
    getline(cin,departamento);
    cin.clear();
    fflush(stdin);

    relatorio->setDepartamento(departamento);
}


void removerItem(vector<Biblioteca *> &listBiblioteca){


}

void pesquisarItem(vector<Biblioteca *> &listBiblioteca){


}

void emprestimoItem(vector<Biblioteca *> &listBiblioteca){


}


