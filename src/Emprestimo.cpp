#include "Emprestimo.h"

using namespace std;

Emprestimo::Emprestimo()
{
    cartaz = NULL;
    cd = NULL;
    dissertacao = NULL;
    dvd = NULL;
    fita = NULL;
    jornal = NULL;
    livro = NULL;
    mapa = NULL;
    monografia = NULL;
    relatorio = NULL;
    revista = NULL;
    tese = NULL;
}

Emprestimo::~Emprestimo()
{
}

Aluno* Emprestimo::getAluno() {
    return aluno;
}

int Emprestimo::getDia(){
    return dia;
}

int Emprestimo::getMes(){
    return mes;
}

int Emprestimo::getAno(){
    return ano;
}

void Emprestimo::setAluno(Aluno *aluno){
    this->aluno = aluno;
}

void Emprestimo::setDia(int dia){
    this->dia = dia;
}

void Emprestimo::setMes(int mes){
    this->dia = dia;
}

void Emprestimo::setAno(int ano){
    this->ano = ano;
}


Cartaz* Emprestimo::getCartaz(){
    return cartaz;
}
CD* Emprestimo::getCd(){
    return cd;
}
Dissertacao* Emprestimo::getDissertacao(){
    return dissertacao;
}
DVD* Emprestimo::getDvd(){
    return dvd;
}
Fita* Emprestimo::getFita(){
    return fita;
}
Jornal* Emprestimo::getJornal(){
    return jornal;
}
Livro* Emprestimo::getLivro(){
    return livro;
}
Mapa* Emprestimo::getMapa(){
    return mapa;
}
Monografia* Emprestimo::getMonografia(){
    return monografia;
}
Relatorio* Emprestimo::getRelatorio(){
    return relatorio;
}
Revista* Emprestimo::getRevista(){
    return revista;
}
Tese* Emprestimo::getTese(){
    return tese;
}

void Emprestimo::setCartaz(Cartaz *cartaz){
    this->cartaz = cartaz;
}
void Emprestimo::setCd(CD *cd){
    this->cd = cd;
}
void Emprestimo::setDissertacao(Dissertacao *dissertacao){
    this->dissertacao = dissertacao;
}
void Emprestimo::setDvd(DVD *dvd){
    this->dvd = dvd;
}
void Emprestimo::setFita(Fita *fita){
    this->fita = fita;
}
void Emprestimo::setJornal(Jornal *jornal){
    this->jornal = jornal;
}
void Emprestimo::setLivro(Livro *livro){
    this->livro = livro;
}
void Emprestimo::setMapa(Mapa *mapa){
    this->mapa = mapa;
}
void Emprestimo::setMonografia(Monografia *monografia){
    this->monografia = monografia;
}
void Emprestimo::setRelatorio(Relatorio *relatorio){
    this->relatorio = relatorio;
}
void Emprestimo::setRevista(Revista *revista){
    this->revista = revista;
}
void Emprestimo::setTese(Tese *tese){
    this->tese = tese;
}


void imprimirImprestimo(Emprestimo *emprestimo){

    Biblioteca *biblioteca;
    Cartaz *cartaz = emprestimo->getCartaz();
    CD *cd = emprestimo->getCd();
    Dissertacao *dissertacao = emprestimo->getDissertacao();
    DVD *dvd = emprestimo->getDvd();
    Fita *fita = emprestimo->getFita();
    Jornal *jornal = emprestimo->getJornal();
    Livro *livro = emprestimo->getLivro();
    Mapa *mapa = emprestimo->getMapa();
    Monografia *monografia = emprestimo->getMonografia();
    Relatorio *relatorio = emprestimo->getRelatorio();
    Revista *revista = emprestimo->getRevista();
    Tese *tese = emprestimo->getTese();
    cout << "Seus itens emprestados:\n\n";

    if(emprestimo->getCartaz() != NULL){

        cout << "Cartaz => " << cartaz->imprimirBiblioteca() << "";

    }if(emprestimo->getCd() != NULL){

        cout << "CD -> " << cd->imprimirBiblioteca() << endl;

    }if(emprestimo->getDissertacao() != NULL){
        
        cout << "Dissertacao -> " << dissertacao->imprimirBiblioteca() << endl;

    }if(emprestimo->getDvd() != NULL){

        cout << "DVD -> " << dvd->imprimirBiblioteca() << endl;

    }if(emprestimo->getFita() != NULL){

        cout << "Fita -> " << fita->imprimirBiblioteca() << endl;

    }if(emprestimo->getJornal() != NULL){

        cout << "Jornal -> " << jornal->imprimirBiblioteca() << endl;

    }if(emprestimo->getLivro() != NULL){

        cout << "Livro -> " << livro->imprimirBiblioteca() << endl;

    }if(emprestimo->getMapa() != NULL){

        cout << "Mapa -> " << mapa->imprimirBiblioteca() << endl;

    }if(emprestimo->getCartaz() != NULL){

        cout << "Cartaz -> " << cartaz->imprimirBiblioteca() << endl;
    }


}