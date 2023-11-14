#include "Biblioteca.h"
//Colocar essa condição em todo .cpp

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

    Biblioteca::Biblioteca(string titulo, string autor, int ano){

    }
    Biblioteca::Biblioteca(){

    }
    Biblioteca::~Biblioteca(){

    }



    string Biblioteca::getTitulo(){
        return titulo;
    }
    string Biblioteca::getAutor(){
        return autor;
    }
    int Biblioteca::getAno(){
        return ano;
    }



    void Biblioteca::setTitulo(string titulo){
        this->titulo = titulo;
    }

    void Biblioteca::setAutor(string autor){
        this->autor = autor;
    }

    void Biblioteca::setAno(int ano){
        this->ano = ano;
    }


#endif