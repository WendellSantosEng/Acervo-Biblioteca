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


void Emprestimo::adicionarItem(Biblioteca* item) {

    try {
        if (item == nullptr) {
            cout << "Erro: Tentativa de adicionar item nulo." << endl;
            return;
        }

        if (Livro* livro = dynamic_cast<Livro*>(item)) {
            setLivro(livro);
        } else if (Revista* revista = dynamic_cast<Revista*>(item)) {
            setRevista(revista);
        } else if (CD* cd = dynamic_cast<CD*>(item)) {
            setCd(cd);
        } else if (Dissertacao* dissertacao = dynamic_cast<Dissertacao*>(item)) {
            setDissertacao(dissertacao);
        } else if (DVD* dvd = dynamic_cast<DVD*>(item)) {
            setDvd(dvd);
        } else if (Fita* fita = dynamic_cast<Fita*>(item)) {
            setFita(fita);
        } else if (Jornal* jornal = dynamic_cast<Jornal*>(item)) {
            setJornal(jornal);
        } else if (Mapa* mapa = dynamic_cast<Mapa*>(item)) {
            setMapa(mapa);
        } else if (Monografia* monografia = dynamic_cast<Monografia*>(item)) {
            setMonografia(monografia);
        } else if (Relatorio* relatorio = dynamic_cast<Relatorio*>(item)) {
            setRelatorio(relatorio);
        } else if (Tese* tese = dynamic_cast<Tese*>(item)) {
            setTese(tese);
        } else {
            cout << "Erro: Tipo de item desconhecido." << endl;
            return;
        }
    } catch (const std::exception& e) {
        std::cerr << "Exceção capturada: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Exceção desconhecida capturada." << std::endl;
    }

    tm dataAtual = obterDataAtual();

    int dia = dataAtual.tm_mday;
    int mes = dataAtual.tm_mon + 1;
    int ano = dataAtual.tm_year + 1900;

    cout << "Data atual: " << dia << "/" << mes << "/" << ano << std::endl;

    tm dataDevolucao = adicionarDias(dataAtual, 14);

    this->setDia(dataDevolucao.tm_mday);
    this->setMes(dataDevolucao.tm_mon + 1);
    this->setAno(dataDevolucao.tm_year + 1900);

    cout << "Data de devolucao do item: " << this->getDia() << "/" << this->getMes() << "/" << this->getAno() << std::endl;
}

tm Emprestimo::obterDataAtual() {
    time_t tempoAtual = time(0);
    return *localtime(&tempoAtual);
}

tm Emprestimo::adicionarDias(tm data, int dias) {
    time_t tempo = mktime(&data);
    tempo += dias * 24 * 60 * 60;
    return *localtime(&tempo);
}

/*void Emprestimo::imprimirImprestimo(){

    Biblioteca *biblioteca;
    Cartaz *cartaz = this->getCartaz();
    CD *cd = this->getCd();
    Dissertacao *dissertacao = this->getDissertacao();
    DVD *dvd = this->getDvd();
    Fita *fita = this->getFita();
    Jornal *jornal = this->getJornal();
    Livro *livro = this->getLivro();
    Mapa *mapa = this->getMapa();
    Monografia *monografia = this->getMonografia();
    Relatorio *relatorio = this->getRelatorio();
    Revista *revista = this->getRevista();
    Tese *tese = this->getTese();
    cout << "Seus itens emprestados:\n\n";

    if(this->getCartaz() != NULL){

        cout << "Cartaz => " << cartaz->imprimirBiblioteca() << "";

    }if(this->getCd() != NULL){

        cout << "CD -> " << cd->imprimirBiblioteca() << endl;

    }if(this->getDissertacao() != NULL){
        
        cout << "Dissertacao -> " << dissertacao->imprimirBiblioteca() << endl;

    }if(this->getDvd() != NULL){

        cout << "DVD -> " << dvd->imprimirBiblioteca() << endl;

    }if(this->getFita() != NULL){

        cout << "Fita -> " << fita->imprimirBiblioteca() << endl;

    }if(this->getJornal() != NULL){

        cout << "Jornal -> " << jornal->imprimirBiblioteca() << endl;

    }if(this->getLivro() != NULL){

        cout << "Livro -> " << livro->imprimirBiblioteca() << endl;

    }if(this->getMapa() != NULL){

        cout << "Mapa -> " << mapa->imprimirBiblioteca() << endl;

    }if(this->getCartaz() != NULL){

        cout << "Cartaz -> " << cartaz->imprimirBiblioteca() << endl;
    }


}*/


void Emprestimo::imprimirImprestimo() {
    cout << "Seus itens emprestados:\n\n";

    imprimirSeNaoNulo(getCartaz(), "Cartaz");
    imprimirSeNaoNulo(getCd(), "CD");
    imprimirSeNaoNulo(getDissertacao(), "Dissertacao");
    imprimirSeNaoNulo(getDvd(), "DVD");
    imprimirSeNaoNulo(getFita(), "Fita");
    imprimirSeNaoNulo(getJornal(), "Jornal");
    imprimirSeNaoNulo(getLivro(), "Livro");
    imprimirSeNaoNulo(getMapa(), "Mapa");
    imprimirSeNaoNulo(getMonografia(), "Monografia");
    imprimirSeNaoNulo(getRelatorio(), "Relatorio");
    imprimirSeNaoNulo(getRevista(), "Revista");
    imprimirSeNaoNulo(getTese(), "Tese");
}

void Emprestimo::imprimirSeNaoNulo(Biblioteca* item, const std::string& tipo) {
    if (item != nullptr) {
        std::cout << tipo << " -> ";
        item->imprimirBiblioteca();
        std::cout << std::endl;
    }
}
