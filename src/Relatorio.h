#include "Biblioteca.h"

class Relatorio : public Biblioteca{

    private:

        string departamento;

    public:

        Relatorio(string titulo, string autor, int ano, string departamento);
        Relatorio();
        ~Relatorio();

        string getDepartamento();
        
        void setDepartamento(string departamento);

        void imprimirRelatorio();
};