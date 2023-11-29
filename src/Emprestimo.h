#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include "Biblioteca.h"
#include "Aluno.h"

#include "Cartaz.h"
#include "CD.h"
#include "Dissertacao.h"
#include "DVD.h"
#include "Fita.h"
#include "Jornal.h"
#include "Livro.h"
#include "Mapa.h"
#include "Midia.h"
#include "Monografia.h"
#include "Periodico.h"
#include "Relatorio.h"
#include "Revista.h"
#include "Tese.h"
#include "TrabalhodeConclusao.h"

class Emprestimo{

    private:

        Aluno *aluno;
        int dia;
        int mes;
        int ano;

        Cartaz *cartaz;
        CD *cd;
        Dissertacao *dissertacao;
        DVD *dvd;
        Fita *fita;
        Jornal *jornal;
        Livro *livro;
        Mapa *mapa;
        Monografia *monografia;
        Relatorio *relatorio;
        Revista *revista;
        Tese *tese;

    public:
        Emprestimo();
        ~Emprestimo();

        Aluno* getAluno();
        int getDia();
        int getMes();
        int getAno();
        Cartaz* getCartaz();
        CD* getCd();
        Dissertacao* getDissertacao();
        DVD* getDvd();
        Fita* getFita();
        Jornal* getJornal();
        Livro* getLivro();
        Mapa* getMapa();
        Monografia* getMonografia();
        Relatorio* getRelatorio();
        Revista* getRevista();
        Tese* getTese();

        void setAluno(Aluno *aluno);
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        
        void setCartaz(Cartaz *cartaz);
        void setCd(CD *cd);
        void setDissertacao(Dissertacao *dissertacao);
        void setDvd(DVD *dvd);
        void setFita(Fita *fita);
        void setJornal(Jornal *jornal);
        void setLivro(Livro *livro);
        void setMapa(Mapa *mapa);
        void setMonografia(Monografia *monografia);
        void setRelatorio(Relatorio *relatorio);
        void setRevista(Revista *revista);
        void setTese(Tese *tese);

        
        void adicionarItem(Biblioteca* item);
        tm obterDataAtual();
        tm adicionarDias(tm data, int dias); 

        //void imprimirImprestimo();
        
        void imprimirImprestimo();
        void imprimirSeNaoNulo(Biblioteca* item, const std::string& tipo);


};

#endif