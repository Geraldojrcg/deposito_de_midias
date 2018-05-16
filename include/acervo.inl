#include "acervo.hpp"
Acervo::Acervo(void){
    //livros
    Midia* m1 = new Livro("livro 1", "autor 1", "edicao 1", "123123-B", 2010);
    Midia* m2 = new Livro("livro 2", "autor 2", "edicao 2", "123123-C", 2011);
    //upcasting
    insert_midia(m1);
    insert_midia(m2);
    //cds
    Midia* m3 = new Cd("Cd 1", "compositor 1", "gravadora 1", 12, 2012);
    Midia* m4= new Cd("Cd 2", "compositor 2", "gravadora 2", 14, 2014);
    //upcasting
    insert_midia(m3);
    insert_midia(m4);
    //dvds
    Midia* m5 = new Dvd("Dvd 1", "diretor 1", "1h e 20min", "10 anos", 2010);
    Midia* m6 = new Dvd("Dvd 2", "diretor 2", "1h e 40min", "livre", 2015);
    //upcasting
    insert_midia(m5);
    insert_midia(m6);
}

void Acervo::insert_midia(Midia *m){
    bool diff = true;
    if(!ml.empty()){
        Livro *ln;
        Cd* cn;
        Dvd* dn;
        if(m->getTipo() == "livro"){
            ln = (Livro*)(m);
        }else if(m->getTipo() == "cd"){
            cn = (Cd*)(m);
        }else{
            dn = (Dvd*)(m);
        }
        for(Midia* m : ml){
            if(m->getTipo() == "livro"){
                Livro *l = (Livro*)(m);
                if(*l == *ln)
                    diff = false;
            }else if(m->getTipo() == "cd"){
                Cd* c = (Cd*)(m);
                if(*c == *cn)
                    diff = false;
            }else{
                Dvd* d = (Dvd*)(m);
                if(*d == *dn)
                    diff = false;
            }
        }
        if(diff){
            if(m->getTipo() == "livro"){
                contLivro++;
            }else if(m->getTipo() == "cd"){
                contCd++;
            }else{
                contDvd++;
            }
            ml.push_back(m);
        }else{
            std::cout << "Erro: mídia existente no acervo!\n";
        }
    }else{
        ml.push_back(m);
    }
}
void Acervo::info_midia(){
    for(Midia* m : ml){
        if(m->getTipo() == "livro"){
            Livro *l = (Livro*)(m);
            std::cout << *l << std::endl;
        }else if(m->getTipo() == "cd"){
            Cd* c = (Cd*)(m);
            std::cout << *c << std::endl;
        }else{
            Dvd* d = (Dvd*)(m);
            std::cout << *d << std::endl;
        }
    }
}

void Acervo::estatistica(){
    std::cout << "Livros: " << contLivro << "\n";
    std::cout << "Cds: " << contCd << "\n";
    std::cout << "Dvds: " << contDvd << "\n";
}