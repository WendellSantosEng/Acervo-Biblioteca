#include <locale>
#include <vector>

#include "Biblioteca.h"
#include "Midia.h"
#include "CD.h"
#include "Fita.h"
#include "Mapa.h"
#include "Relatorio.h"
#include "Cartaz.h"
#include "Livro.h"
#include "Periodico.h"
#include "Revista.h"
#include "Jornal.h"
#include "TrabalhoDeConclusao.h"
#include "Tese.h"
#include "Dissertacao.h"
#include "Monografia.h"
#include "DVD.h"

void cadastrarItem(vector<Biblioteca *> &listBiblioteca);
void removerItem(vector<Biblioteca *> &listBiblioteca);
Biblioteca *pesquisarItem(vector<Biblioteca *> &listBiblioteca);
void emprestimoItem(vector<Biblioteca *> &listBiblioteca);

void cadastrarItemAcervo(Biblioteca *biblioteca); // Propriedades Gerais
void cadastrarMidia(Midia *midia); // Classe Mae Midia
void cadastrarPeriodico(Periodico *periodico); // Classe Mae Periodico
void cadastrarTrabalhoDeConclusao(TrabalhoDeConclusao *trabalhoDeConclusao); //Classe Mae Trabalho de Conclusao


void cadastrarCD(CD *cd); 
void cadastrarDVD(DVD *dvd);
void cadastrarFita(Fita *fita);
void cadastrarMapa(Mapa *mapa);
void cadastrarCartaz(Cartaz *cartaz);
void cadastrarRelatorio(Relatorio *relatorio);
void cadastrarLivro(Livro *livro);
void cadastrarPeriodico(Periodico *periodico);
void cadastrarRevista(Revista *revista);
void cadastrarJornal(Jornal *jornal);
void cadastrarTrabalhoDeConclusao(TrabalhoDeConclusao *trabalhoDeConclusao);
void cadastrarTese(Tese *tese);
void cadastrarDissertacao(Dissertacao *dissertacao);
void cadastrarMonografia(Monografia *monografia);

int main(){

    vector<Biblioteca *> listBiblioteca;
    Biblioteca *item_pesquisa;

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

                item_pesquisa = pesquisarItem(listBiblioteca);
                item_pesquisa->imprimirBiblioteca();
                
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
        cout << "Cadastrar qual item?\n1 - CD\n2 - Cadastro de DVD\n3 - Fita\n4 - Mapa\n5 - Cartaz\n6 - Relatorio\n7 - Livro\n8 - Periodico\n9 - Revista\n10 - Jornal\n11 - Trabalho de Conclusao\n12 - Tese\n13 - Dissertacao\n14 - Monografia\n\n15 - Voltar ao Menu Anterior";
        cout << "Insira uma opção: ";

        cin >> op;
        cin.clear();
        fflush(stdin);

        switch(op){
            case 1:
                
                cout << "        Cadastro de CD      " << endl << endl;
                CD *cd;
                cd = new CD();
                cadastrarCD(cd);
                listBiblioteca.push_back(cd);
                cout << "CD cadastrado com sucesso!" << endl << endl; 

                break;
            case 2:
                
                cout << "        Cadastro de DVD      " << endl << endl;
                DVD *dvd;
                dvd = new DVD();
                cadastrarDVD(dvd);
                listBiblioteca.push_back(dvd);
                cout << "DVD cadastrado com sucesso!" << endl << endl; 

                break;                
            case 3:
                
                cout<< "        Cadastro de Fita         "<< endl;
                Fita *fita;
                fita = new Fita();
                cadastrarFita(fita);
                listBiblioteca.push_back(fita);
                cout << "Fita cadastrada com sucesso!" << endl << endl;

                break;
            case 4:

                cout << "       Cadastro de Mapa       " << endl;
                Mapa *mapa; 
                mapa = new Mapa();
                cadastrarMapa(mapa);
                listBiblioteca.push_back(mapa);
                cout << "Mapa cadastrado com sucesso!" << endl << endl;

                break;
            case 5:

                cout << "       Cadastro de Cartaz      " << endl;
                Cartaz *cartaz;
                cartaz = new Cartaz;
                cadastrarCartaz(cartaz);
                listBiblioteca.push_back(cartaz);
                cout << "Cartaz cadastrado com sucesso!" << endl << endl;

                break;
            case 6:

                cout << "       Cadastro de Relatorio      " << endl;
                Relatorio *relatorio;
                relatorio = new Relatorio();
                cadastrarRelatorio(relatorio);
                listBiblioteca.push_back(relatorio);
                cout << "Relatorio cadastrado com sucesso!" << endl << endl;

                break;
            case 7:

                cout << "       Cadastro de Livro      " << endl;
                Livro *livro;
                livro = new Livro();
                cadastrarLivro(livro);
                listBiblioteca.push_back(livro);
                cout << "Livro cadastrado com sucesso!" << endl << endl;

                break;
            case 8:

                /* cout << "       Cadastro de Periodico      " << endl;
                Periodico *periodico;
                periodico = new Periodico();
                cadastrarPeriodico(periodico);
                listBiblioteca.push_back(periodico);
                cout << "Periodico cadastrado com sucesso!" << endl << endl;

                break;  */
            case 9:

                cout << "       Cadastro de Revista      " << endl;
                Revista *revista;
                revista = new Revista();
                cadastrarRevista(revista);
                listBiblioteca.push_back(revista);
                cout << "Revista cadastrada com sucesso!" << endl << endl;

                break;
            case 10:

                cout << "       Cadastro de Jornal      " << endl;
                Jornal *jornal;
                jornal = new Jornal();
                cadastrarJornal(jornal);
                listBiblioteca.push_back(jornal);
                cout << "Jornal cadastrado com sucesso!" << endl << endl;

                break;
            case 11:

                /* cout << "       Cadastro de Trabalho de Conclusao      " << endl;
                TrabalhoDeConclusao *trabalhoDeConclusao;
                trabalhoDeConclusao = new TrabalhoDeConclusao();
                cadastrarTrabalhoDeConclusao(trabalhoDeConclusao);
                listBiblioteca.push_back(trabalhoDeConclusao);
                cout << "Trabalho de Conclusao cadastrado com sucesso!" << endl << endl;

                break; */
            case 12:

                cout << "       Cadastro de Tese      " << endl;
                Tese *tese;
                tese = new Tese();
                cadastrarTese(tese);
                listBiblioteca.push_back(tese);
                cout << "Tese cadastrada com sucesso!" << endl << endl;

                break;
            case 13:

                cout << "       Cadastro de Dissertacao      " << endl;
                Dissertacao *dissertacao;
                dissertacao = new Dissertacao();
                cadastrarDissertacao(dissertacao);
                listBiblioteca.push_back(dissertacao);
                cout << "Dissertacao cadastrada com sucesso!" << endl << endl;

                break;
            case 14:

                cout << "       Cadastro de Monografia      " << endl;
                Monografia *monografia;
                monografia = new Monografia();
                cadastrarMonografia(monografia);
                listBiblioteca.push_back(monografia);
                cout << "Monografia cadastrada com sucesso!" << endl << endl;

                break;

            default:

                break;
        }

        if(op < 1 || op > 15){
            cout << "Insira uma opcao correta" << endl;
        }

    }while(op != 15);

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

void cadastrarDVD(DVD *dvd){

    cout << "   Cadastrar DVD    " << endl << endl;

    string resolucao;

    cout << "Insira a resolucao: ";
    getline(cin,resolucao);
    cin.clear();
    fflush(stdin);

    dvd->setResolucao(resolucao);
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

    cout << "       Cadastrar Relatorio     " << endl <<endl;
    
    cadastrarItemAcervo(relatorio);

    string departamento;

    cout << "Insira a departamento: ";
    getline(cin,departamento);
    cin.clear();
    fflush(stdin);

    relatorio->setDepartamento(departamento);
}

void cadastrarLivro(Livro *livro){

    cout << "       Cadastrar Livro     " << endl <<endl;

    cadastrarItemAcervo(livro);

    string editoraLivro;
    string isbn;
    int paginas;
    string edicao;

    cout << "Insira a Editora do Livro: ";
    getline(cin,editoraLivro);
    cin.clear();
    fflush(stdin);

    livro->setEditoraLivro(editoraLivro);

    cout << "Insira o ISBN: ";
    getline(cin,isbn);
    cin.clear();
    fflush(stdin);

    livro->setIsbn(isbn);

    cout << "Insira a quantidade de paginas: ";
    cin >> paginas;
    cin.clear();
    fflush(stdin);

    livro->setPaginas(paginas);

    cout << "Insira a edição do livro: ";
    getline(cin, edicao);
    cin.clear();
    fflush(stdin);

    livro->setEdicao(edicao);
}

void cadastrarPeriodico(Periodico *periodico){

    cadastrarItemAcervo(periodico);

    string editora;
	int issn;

    cout << "Insira a editora: ";
    getline(cin,editora);
    cin.clear();
    fflush(stdin);

    cout << "Insira o ISSN: ";
    cin >> issn;
    cin.clear();
    fflush(stdin);

    periodico->setEditora(editora);
    periodico->setIssn(issn);
}

void cadastrarRevista(Revista *revista){

    cout << "   Cadastrar Revista    " << endl << endl;

    string assunto;
    string edicao;

    cadastrarPeriodico(revista);

    cout << "Insira o assunto: ";
    getline(cin,assunto);
    cin.clear();
    fflush(stdin);

    cout << "Insira a edicao: ";
    getline(cin,edicao);
    cin.clear();
    fflush(stdin);

    revista->setAssunto(assunto);
    revista->setEdicao(edicao);
}

void cadastrarJornal(Jornal *jornal){

    cout << "   Cadastrar Jornal    " << endl << endl;

    string cidade;

    cadastrarPeriodico(jornal);

    cout << "Insira a cidade: ";
    getline(cin,cidade);
    cin.clear();
    fflush(stdin);

    jornal->setCidade(cidade);
}

void cadastrarTrabalhoDeConclusao(TrabalhoDeConclusao *trabalhoDeConclusao){

    cadastrarItemAcervo(trabalhoDeConclusao);

    string orientador;
    string dataDefesa;
    string tema;

    cout << "Insira o Orientador: ";
    getline(cin,orientador);
    cin.clear();
    fflush(stdin);

    cout << "Insira a data de defesa: ";
    getline(cin,dataDefesa);
    cin.clear();
    fflush(stdin);

    cout << "Insira o tema: ";
    getline(cin,tema);
    cin.clear();
    fflush(stdin);

    trabalhoDeConclusao->setOrientador(orientador);
    trabalhoDeConclusao->setDataDefesa(dataDefesa);
    trabalhoDeConclusao->setTema(tema);
}

void cadastrarTese(Tese *tese){

    cout << "   Cadastrar Tese    " << endl << endl;

    string universidade;

    cadastrarTrabalhoDeConclusao(tese);

    cout << "Insira a Universidade: ";
    getline(cin,universidade);
    cin.clear();
    fflush(stdin);

    tese->setUniversidade(universidade);
}

void cadastrarDissertacao(Dissertacao *dissertacao){

    cout << "   Cadastrar Dissertacao    " << endl << endl;

    string departamento;
    string metodologia;

    cadastrarTrabalhoDeConclusao(dissertacao);

    cout << "Insira o departamento: ";
    getline(cin,departamento);
    cin.clear();
    fflush(stdin);

    cout << "Insira a metodologia: ";
    getline(cin,metodologia);
    cin.clear();
    fflush(stdin);

    dissertacao->setDepartamento(departamento);
    dissertacao->setMetodologia(metodologia);
}

void cadastrarMonografia(Monografia *monografia){

    cout << "   Cadastrar Monografia    " << endl << endl;

    string curso;
    string conclusao;

    cadastrarTrabalhoDeConclusao(monografia);

    cout << "Insira o curso: ";
    getline(cin,curso);
    cin.clear();
    fflush(stdin);

    cout << "Insira a data de conclusao: ";
    getline(cin,conclusao);
    cin.clear();
    fflush(stdin);

    monografia->setCurso(curso);
    monografia->setConclusao(conclusao);
}


void removerItem(vector<Biblioteca *> &listBiblioteca){

    Biblioteca *biblioteca = pesquisarItem(listBiblioteca);
    
    cout << "Contato removido: \n";
    biblioteca->imprimirBiblioteca();

    for(vector<Biblioteca *>::iterator it = listBiblioteca.begin(); it != listBiblioteca.end(); it++){
        if((*it) == biblioteca){
            listBiblioteca.erase(it);
            break;
        }
    }
    delete(biblioteca);

}

Biblioteca *pesquisarItem(vector<Biblioteca *> &listBiblioteca){

    string titulo, autor;
    Biblioteca *biblioteca = NULL;

    cout << "Digite o titulo: ";
    getline(cin, titulo);
    cin.clear();
    fflush(stdin);
    
    cout << "Digite o autor: ";
    getline(cin, autor);
    cin.clear();
    fflush(stdin);

    for(vector<Biblioteca *>::iterator it = listBiblioteca.begin(); it != listBiblioteca.end(); it++){
        
        Biblioteca *b = (*it);

        if(b->getTitulo().compare(titulo) == 0 && b->getAutor().compare(autor) == 0){
            biblioteca = b;
            break;
        }
    }

    return biblioteca;
}

void emprestimoItem(vector<Biblioteca *> &listBiblioteca){


}