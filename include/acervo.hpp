#ifndef acervo_
#define acervo_
#include "../include/livro.hpp"
#include "../include/cd.hpp"
#include "../include/dvd.hpp"
#include <list>
class Acervo: public Midia{
    private:
        std::list<Midia*> ml;
        int contLivro = 0;
        int contCd = 0;
        int contDvd = 0;
    public:
        Acervo(void);
        void insert_midia(Midia *m);
        void info_midia();
        void estatistica();
};
#include "acervo.inl"
#endif