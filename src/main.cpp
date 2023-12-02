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

#include "CadastroItens.h"
#include "Aluno.h"
#include "Emprestimo.h"

void cadastrarItem(vector<Biblioteca *> &listBiblioteca);
void removerItem(vector<Biblioteca *> &listBiblioteca);
Biblioteca *pesquisarItem(vector<Biblioteca *> &listBiblioteca);
int emprestimoItem(vector<Biblioteca *> &listBiblioteca, vector<Emprestimo *> &listEmprestimo, Aluno *listAluno[], int pos);
Emprestimo *pesquisaAluno(vector<Emprestimo *> &listEmprestimo, Aluno *listaAluno[], int pos);


int main(int argc, char *argv[]){

    vector<Biblioteca *> listBiblioteca;
    Biblioteca *item_pesquisa;

    Aluno *listAluno[QUANT_ALUNO];
    vector<Emprestimo *>listEmprestimo;

    Emprestimo *emprestimo;

    int op,ver=0, pos=0, count =0, info=0;

    cout << "BEM VINDO A BIBLIOTECA\n\n";

    cout << "Deseja imprimir as informacoes? 1 - sim, 2- nao";
    cin >> info;
    cin.clear();
    fflush(stdin);
 
    if(info == 1){

        if (argc < 1) {
            cerr << "Erro: Não é possível obter o caminho do executável." << endl;
        }

        string caminhoExecutavel = argv[0];

        size_t pos = caminhoExecutavel.find_last_of("\\/");
        string caminhoArquivo = caminhoExecutavel.substr(0, pos + 1) + "informacoes.txt";

        ifstream arquivo(caminhoArquivo);

        if(!arquivo.is_open()){
            cout << "Erro ao abrir o arquivo." << endl;
        }

        string linha;
        while (getline(arquivo, linha)){
            cout << linha << endl;
        }

        arquivo.close();
    }

    cout << "\n\n       CADASTRO DE ALUNOS      " << endl << endl;

    for(int i=0;i<QUANT_ALUNO;i++){

        Aluno *aluno = cadastraAluno();
        listAluno[i] = aluno;
        cout << "Nome: " << listAluno[i]->getNomeAluno()  << " matricula: " << listAluno[i]->getMatricula() << " cpf: " << listAluno[i]->getCpf() << endl << endl;
    }
    do{
        ver = entrarSistema(listAluno,&pos);

        if(ver == 1){
            cout << "Entrada feita com sucesso" << endl;
        }else {
            cout << "Erro na entrada" << endl;
        }
    }while(ver != 1);

    do{
        cout << "---------------------------------------------------------------\n";
        cout << "| Insira uma opcao:                                            |" << endl;
        cout << "| 1 -> Cadastrar novo item no acervo                           |\n";
        cout << "| 2 -> Remover item do acervo                                  |\n";
        cout << "| 3 -> Verificar disponibilidade de item no acervo             |\n";
        cout << "| 4 -> Realizar emprestimo                                     |\n";
        cout << "| 5 -> Verificar suas pendencias                               |\n";
        cout << "| 6 -> Sair da Biblioteca                                      |\n";
        cout << "---------------------------------------------------------------\n\n";
        

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
                if(item_pesquisa != NULL){
                    item_pesquisa->imprimirBiblioteca();
                }else{
                    cout << "\n ! ITEM INEXISTENTE NA BIBLIOTECA ! \n" << endl ;
                }
                
                break;
            case 4:

                ver = emprestimoItem(listBiblioteca, listEmprestimo, listAluno, pos);

                if(ver == 1){
                    cout << "\nITEM EMPRESTADO COM SUCESSO\n" << endl << endl;
                    count ++;
                }else{
                    cout << "\nNAO FOI POSSIVEL REALIZAR O EMPRESTIMO\n" << endl << endl;
                }

                break;
            case 5:

                if(count>0){
                    emprestimo = pesquisaAluno(listEmprestimo,listAluno,pos);
                    if(emprestimo != NULL){
                        emprestimo->imprimirImprestimo();
                    }
                }else{
                    cout << "\nAINDA NAO HA LIVROS EMPRESTADOS\n" << endl << endl;
                }

                break;
            default:

                break;
        }
        if(op < 1 || op > 6){
            cout << " ! INSIRA UMA OPCAO VALIDA ! \n";
        }

    }while(op!=6);
    
    return 0;
    
}

void cadastrarItem(vector<Biblioteca *> &listBiblioteca){
    int op;

    do{
        cout << "---------------------------------------\n";
        cout << "| Insira um valor:                     |\n";
        cout << "| Cadastrar qual item?                 |\n";
        cout << "| 1 - CD                               |\n";
        cout << "| 2 - Cadastro de DVD                  |\n";
        cout << "| 3 - Fita                             |\n";
        cout << "| 4 - Mapa                             |\n";
        cout << "| 5 - Cartaz                           |\n";
        cout << "| 6 - Relatorio                        |\n";
        cout << "| 7 - Livro                            |\n";
        cout << "| 8 - Revista                          |\n";
        cout << "| 9 - Jornal                           |\n";
        cout << "| 10 - Tese                            |\n";
        cout << "| 11 - Dissertacao                     |\n";
        cout << "| 12 - Monografia                      |\n";
        cout << "|                                      |\n";
        cout << "| 0 - Voltar ao Menu Anterior          |\n";
        cout << "|                                      |\n";
        cout << "---------------------------------------\n";
        
        cout << "INSIRA UMA OPCAO: ";
        cin >> op;
        cin.clear();
        fflush(stdin);

        switch(op){
            case 1:
                
                cout << "\n\n =>        Cadastro de CD      <= " << endl << endl;
                CD *cd;
                cd = new CD();
                cadastrarCD(cd);
                listBiblioteca.push_back(cd);
                cout << "\n CD cadastrado com sucesso! \n" << endl << endl; 

                break;
            case 2:
                
                cout << "\n\n =>        Cadastro de DVD      <= " << endl << endl;
                DVD *dvd;
                dvd = new DVD();
                cadastrarDVD(dvd);
                listBiblioteca.push_back(dvd);
                cout << "\n DVD cadastrado com sucesso!\n " << endl << endl; 

                break;                
            case 3:
                
                cout<< "\n\n =>        Cadastro de Fita         <= "<< endl;
                Fita *fita;
                fita = new Fita();
                cadastrarFita(fita);
                listBiblioteca.push_back(fita);
                cout << "\n Fita cadastrada com sucesso! \n" << endl << endl;

                break;
            case 4:

                cout << "\n\n =>       Cadastro de Mapa       <= " << endl;
                Mapa *mapa; 
                mapa = new Mapa();
                cadastrarMapa(mapa);
                listBiblioteca.push_back(mapa);
                cout << "\n Mapa cadastrado com sucesso! \n" << endl << endl;

                break;
            case 5:

                cout << "\n\n =>       Cadastro de Cartaz      <= " << endl;
                Cartaz *cartaz;
                cartaz = new Cartaz;
                cadastrarCartaz(cartaz);
                listBiblioteca.push_back(cartaz);
                cout << "\n Cartaz cadastrado com sucesso! \n" << endl << endl;

                break;
            case 6:

                cout << "\n\n =>       Cadastro de Relatorio      <= " << endl;
                Relatorio *relatorio;
                relatorio = new Relatorio();
                cadastrarRelatorio(relatorio);
                listBiblioteca.push_back(relatorio);
                cout << "\n Relatorio cadastrado com sucesso! \n" << endl << endl;

                break;
            case 7:

                cout << "\n\n =>       Cadastro de Livro      <= " << endl;
                Livro *livro;
                livro = new Livro();
                cadastrarLivro(livro);
                listBiblioteca.push_back(livro);
                cout << "\n Livro cadastrado com sucesso! \n" << endl << endl;

                break;
            case 8:

                cout << "\n\n =>       Cadastro de Revista      <= " << endl;
                Revista *revista;
                revista = new Revista();
                cadastrarRevista(revista);
                listBiblioteca.push_back(revista);
                cout << "\n Revista cadastrada com sucesso! \n" << endl << endl;

                break;
            case 9:

                cout << "\n\n =>       Cadastro de Jornal      <= " << endl;
                Jornal *jornal;
                jornal = new Jornal();
                cadastrarJornal(jornal);
                listBiblioteca.push_back(jornal);
                cout << "\n Jornal cadastrado com sucesso!\n " << endl << endl;

                break;
            case 10:

                cout << "\n\n =>       Cadastro de Tese      <= " << endl;
                Tese *tese;
                tese = new Tese();
                cadastrarTese(tese);
                listBiblioteca.push_back(tese);
                cout << "\n Tese cadastrada com sucesso! \n" << endl << endl;

                break;
            case 11:

                cout << "\n\n =>       Cadastro de Dissertacao      <= " << endl;
                Dissertacao *dissertacao;
                dissertacao = new Dissertacao();
                cadastrarDissertacao(dissertacao);
                listBiblioteca.push_back(dissertacao);
                cout << "\n Dissertacao cadastrada com sucesso! \n" << endl << endl;

                break;
            case 12:

                cout << "\n\n =>       Cadastro de Monografia      <= " << endl;
                Monografia *monografia;
                monografia = new Monografia();
                cadastrarMonografia(monografia);
                listBiblioteca.push_back(monografia);
                cout << "\n Monografia cadastrada com sucesso!\n " << endl << endl;

                break;

            default:

                break;
        }

        if(op < 0 || op > 12){
            cout << "\n ! Insira uma opcao correta ! " << endl;
        }

    }while(op != 0);

}


void removerItem(vector<Biblioteca *> &listBiblioteca){

    Biblioteca *biblioteca = pesquisarItem(listBiblioteca);

    if(biblioteca == NULL){
        printf("\n Item nao existe na biblioteca!\n");
        return;
    }
    
    cout << "\n Item do acervo removido: \n";
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
    if(biblioteca != NULL){
        return biblioteca;
    }else{
        return NULL;
    }
    
}


Emprestimo *pesquisaAluno(vector<Emprestimo *> &listEmprestimo, Aluno *listaAluno[], int pos){

    Emprestimo *emprestimo;
    emprestimo = NULL;

    Emprestimo *emp;
    vector<Emprestimo *>::iterator it;

    for(it = listEmprestimo.begin(); it != listEmprestimo.end(); it++){
        
        emp = (*it);

        if(emp->getAluno()->getNomeAluno() == listaAluno[pos]->getNomeAluno()){
            emprestimo = emp;
            break;
        }
    }
    return emprestimo;
}

int emprestimoItem(vector<Biblioteca *> &listBiblioteca, vector<Emprestimo *> &listEmprestimo, Aluno *listAluno[], int pos){

    int v=0,op;
    string nome;
    Biblioteca *item;
    Emprestimo *emprestimo = NULL;
    Emprestimo *emp;
    
    do{
        item = pesquisarItem(listBiblioteca);
        
        if(item != NULL){
            for(vector<Emprestimo *>::iterator it = listEmprestimo.begin(); it != listEmprestimo.end(); it++){
            
                emp = (*it);

                if(emp->getAluno()->getNomeAluno() == listAluno[pos]->getNomeAluno()){
                    emprestimo = emp;
                    break;
                }
            }
            if(emprestimo == NULL){

                cout << "\n CRIADA NOVA FICHA PARA O ALUNO \n " << endl;
                emprestimo = new Emprestimo();
                emprestimo->setAluno(listAluno[pos]);
                listEmprestimo.push_back(emprestimo);

            }if(emprestimo != NULL){

                cout << "1- Deseja fazer o imprestimo ou;\n2- Realizar a busca novamente\n3- SAIR";
                cin >> op;
                cin.clear();
                fflush(stdin);

                if(op == 1){

                    emprestimo->adicionarItem(item);
                    cout << " EMPRESTIMO REALIZADO COM SUCESSO" << endl << endl;
                    v=1;

                    return v;
                }
            }
        }else{
            cout << "\n ITEM NAO ENCONTRADO \n";
            return 0;
        }

    }while(op != 3);
    return 0;
}
