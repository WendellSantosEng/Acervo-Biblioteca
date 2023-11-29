#include "Aluno.h"

Aluno::Aluno()
{
}

Aluno::~Aluno()
{
}


string Aluno::getNomeAluno(){
    return nome_aluno;
}

int Aluno::getMatricula(){
    return matricula;
}

int Aluno::getCpf(){
    return cpf;
}

void Aluno::setNomeAluno(string nome_aluno){

    this->nome_aluno = nome_aluno;
}


void Aluno::setMatricula(int matricula) {
    this->matricula = matricula;
}

void Aluno::setCpf(int cpf) {
    this->cpf = cpf;
}
