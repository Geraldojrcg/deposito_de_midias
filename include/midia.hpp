#ifndef midia
#define midia
#include <iostream>
using namespace std;
class Midia{
    private:
        string tipo = "null";
        int ano_lancamento = 0;
    public:
        string getTipo();
        void setTipo(string t);
        int getAno();
        void setAno(int a);
};
#include "midia.inl"
#endif