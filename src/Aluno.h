#include "Biblioteca.h"

#ifndef ALUNO_H
#define ALUNO_H

class Aluno{

    private:

        string nome_aluno;
        int matricula;
        int cpf;

    public:

        Aluno();
        ~Aluno();

        string getNomeAluno();
        int getMatricula();
        int getCpf();

        void setNomeAluno(string nome_aluno);
        void setMatricula(int matricula);
        void setCpf(int cpf);

};

#endif