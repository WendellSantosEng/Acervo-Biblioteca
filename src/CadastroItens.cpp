#include "CadastroItens.h"

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

    cadastrarMidia(dvd);

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

Aluno* cadastraAluno(){

    Aluno *aluno = new Aluno();

    string nome_aluno;
    int matricula;
    int cpf;

    cout << "Insira o seu nome: ";
    getline(cin,nome_aluno);
    aluno->setNomeAluno(nome_aluno);
    cin.clear();
    fflush(stdin);

    cout << "Insira a matricula: ";
    cin >> matricula;
    aluno->setMatricula(matricula);
    cin.clear();
    fflush(stdin);

    cout << "Insira o cpf, o qual sera sua 'senha', para entrar no sistema: ";
    cin >> cpf;
    aluno->setCpf(cpf);
    cin.clear();
    fflush(stdin);

    return aluno;
}

int entrarSistema(Aluno *listPessoa[],int *pos){

    int v=0;

    string nome;
    int cpf,matricula;

    cout << "Insira sua matricula: ";
    cin >> matricula;
    cin.ignore();

    cout << "Insira sua senha: ";
    cin >> cpf;
    cin.ignore();

    for(int i=0;i<QUANT_ALUNO;i++){

        if(matricula == listPessoa[i]->getMatricula() && cpf == listPessoa[i]->getCpf() ){

            cout << "Bem vindo " << listPessoa[i]->getNomeAluno() << "Fique a vontade!" << endl << endl;
            return 1;
            *pos = i;

        }else if(i == QUANT_ALUNO-1){
            cout << "Usuario inexistente" << endl << endl;
            return 0;
        }
    }
}

