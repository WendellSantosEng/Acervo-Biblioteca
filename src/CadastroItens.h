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

#include "Aluno.h"


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
void cadastrarRevista(Revista *revista);
void cadastrarJornal(Jornal *jornal);
void cadastrarTrabalhoDeConclusao(TrabalhoDeConclusao *trabalhoDeConclusao);
void cadastrarTese(Tese *tese);
void cadastrarDissertacao(Dissertacao *dissertacao);
void cadastrarMonografia(Monografia *monografia);

Aluno* cadastraAluno();
int entrarSistema(Aluno *listAluno[],int *pos);
