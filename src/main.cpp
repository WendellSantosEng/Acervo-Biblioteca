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


int main(){

    vector<Biblioteca *> listBiblioteca;
    Biblioteca *item_pesquisa;

    Aluno *listAluno[QUANT_ALUNO];
    vector<Emprestimo *>listEmprestimo;

    Emprestimo *emprestimo;

    int op,op2,ver=0, pos=0, count =0;

    cout << "       CADASTRO DE ALUNOS      " << endl << endl;

    for(int i=0;i<QUANT_ALUNO;i++){

        Aluno *aluno = cadastraAluno();
        listAluno[i] = aluno;
        cout << "Nome: " << listAluno[i]->getNomeAluno()  << " matricula: " << listAluno[i]->getMatricula() << " cpf: " << listAluno[i]->getCpf() << endl << endl;
    }

    ver = entrarSistema(listAluno,&pos);

    if(ver == 1){
        cout << "Entrada feita com sucesso" << endl;
    }else {
        cout << "Erro na entrada" << endl;
    }


    do{

        cout << "Insira uma opção: " << endl;
        cout << "1 -> Cadastrar novo item no acervo\n";
        cout << "2 -> Remover item do acervo\n";
        cout << "3 -> Verificar disponibilidade de item no acervo\n";
        cout << "4 -> Realizar emprestimo\n";
        cout << "5 -> Verificar suas pendencias\n";
        cout << "6 -> Sair da Biblioteca\n";

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
                    cout << "Item inexistente na biblioteca" << endl ;
                }
                
                break;
            case 4:

                ver = emprestimoItem(listBiblioteca, listEmprestimo, listAluno, pos);

                if(ver == 1){
                    cout << "Item emprestado com sucesso" << endl << endl;
                    count ++;
                }else{
                    cout << "Nao foi possivel realizar o emprestimo" << endl << endl;
                }

                break;
            case 5:

                if(count>0){
                    emprestimo = pesquisaAluno(listEmprestimo,listAluno,pos);
                    if(emprestimo != NULL){
                        emprestimo->imprimirImprestimo();
                    }
                }else{
                    cout << "Ainda nao ha livros emprestados" << endl << endl;
                }

                break;
            default:

                break;
        }
        if(op < 1 || op > 6){
            cout << "Insira uma opcao valida\n";
        }

    }while(op!=6);
    
    return 0;
    
}

void cadastrarItem(vector<Biblioteca *> &listBiblioteca){
    int op;

    do{
        cout << "Insira um valor: " << endl;
        cout << "Cadastrar qual item?\n1 - CD\n2 - Cadastro de DVD\n3 - Fita\n4 - Mapa\n5 - Cartaz\n6 - Relatorio\n7 - Livro\n8 - Revista\n9 - Jornal\n10 - Tese\n11 - Dissertacao\n12 - Monografia\n\n13 - Voltar ao Menu Anterior";
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

                cout << "       Cadastro de Revista      " << endl;
                Revista *revista;
                revista = new Revista();
                cadastrarRevista(revista);
                listBiblioteca.push_back(revista);
                cout << "Revista cadastrada com sucesso!" << endl << endl;

                break;
            case 9:

                cout << "       Cadastro de Jornal      " << endl;
                Jornal *jornal;
                jornal = new Jornal();
                cadastrarJornal(jornal);
                listBiblioteca.push_back(jornal);
                cout << "Jornal cadastrado com sucesso!" << endl << endl;

                break;
            case 10:

                cout << "       Cadastro de Tese      " << endl;
                Tese *tese;
                tese = new Tese();
                cadastrarTese(tese);
                listBiblioteca.push_back(tese);
                cout << "Tese cadastrada com sucesso!" << endl << endl;

                break;
            case 11:

                cout << "       Cadastro de Dissertacao      " << endl;
                Dissertacao *dissertacao;
                dissertacao = new Dissertacao();
                cadastrarDissertacao(dissertacao);
                listBiblioteca.push_back(dissertacao);
                cout << "Dissertacao cadastrada com sucesso!" << endl << endl;

                break;
            case 12:

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

        if(op < 1 || op > 13){
            cout << "Insira uma opcao correta" << endl;
        }

    }while(op != 13);

}


void removerItem(vector<Biblioteca *> &listBiblioteca){

    Biblioteca *biblioteca = pesquisarItem(listBiblioteca);

    if(biblioteca == NULL){
        printf("Item nao existe na biblioteca!\n");
        return;
    }
    
    cout << "Item do acervo removido: \n";
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
    Biblioteca *biblioteca;

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

    int v=0,i,op;
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

                cout << "CRIADA NOVA FICHA PARA O ALUNO" << endl;
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
            cout << "Item nao encontrado\n";
            return 0;
        }

    }while(op != 3);
}
