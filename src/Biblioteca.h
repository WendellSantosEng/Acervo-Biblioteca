#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#define QUANT_ALUNO 5
#define ITEM_ACERVO 50

#include <iostream>
#include <string>
#include <ctime>
#include <limits>
#include <chrono>

using namespace std;

class Biblioteca{

    //Atributos da classe mãe
    protected:

        string titulo;
        string autor;
        int ano;
    
    public:

        //construtor e destrutor
        Biblioteca(string titulo, string autor, int ano);
        Biblioteca();
        virtual ~Biblioteca();
        

        string getTitulo();
        string getAutor();
        int getAno();

        void setTitulo(string titulo);
        void setAutor(string autor);
        void setAno(int ano);

        virtual void imprimirBiblioteca() = 0;
};

#endif