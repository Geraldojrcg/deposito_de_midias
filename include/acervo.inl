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
bool Acervo::equal_midia(Midia* m){
    for(Midia* aux : ml){
        if(aux->getTipo() == "livro" && m->getTipo() == "livro"){
            Livro *l = (Livro*)(aux);
            Livro *ln = (Livro*)(m);
            if(*l == *ln)
                return true;
        }else if(aux->getTipo() == "cd" && m->getTipo() == "cd"){
            Cd* c = (Cd*)(aux);
            Cd* cn = (Cd*)(m);
            if(*c == *cn)
                return true;
        }else{
            Dvd* d = (Dvd*)(aux);
            Dvd* dn = (Dvd*)(m);
            if(*d == *dn)
                return true;
        }
    }
    return false;
}
void Acervo::insert_midia(Midia *m){
    bool equal = false;
    if(!ml.empty()){
        equal = equal_midia(m);
        if(!equal){
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
        if(m->getTipo() == "livro"){
                contLivro++;
        }else if(m->getTipo() == "cd"){
                contCd++;
        }else{
                contDvd++;
        }
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
Midia* Acervo::search_midia(std::string s){
    bool found = false;
    if(s != ""){
        for(Midia* aux : ml){
            if(aux->getTipo() == "livro"){
                Livro *l = (Livro*)(aux);
                if(l->getTitulo() == s){
                    Midia* m = l;
                    found = true;
                    return m;
                }
            }else if(aux->getTipo() == "cd"){
                Cd* c = (Cd*)(aux);
                    if(c->getNome() == s){
                    Midia* m = c;
                    found = true;
                    return m;
                }
            }else{
                Dvd* d = (Dvd*)(aux);
                    if(d->getTitulo() == s){
                    Midia* m = d;
                    found = true;
                    return m;
                }
            }
        }
    }
    if(!found){
        std::cout <<"Midia não encontrada!\n";
        return nullptr;
    }
     return nullptr;
}
void Acervo::remove_midia(Midia* m){
    if(m != nullptr){
        if(m->getTipo() == "livro"){
            contLivro--;
        }else if(m->getTipo() == "cd"){
            contCd--;
        }else{
            contDvd--;
        }
        ml.remove(m);
    }
}
void Acervo::edit_midia(Midia* m){
    if(m != nullptr){
        if(m->getTipo() == "livro"){
            Livro *aux = (Livro*)(m);
            std::cout << *aux << std::endl;
            Livro* l = new Livro();
            std::cin>> *l; 
            Midia* temp = l;
            remove_midia(m);
            insert_midia(temp);
        }else if(m->getTipo() == "cd"){
            Cd* c = (Cd*)(m);
            std::cout << *c << std::endl;
            Cd* aux = new Cd();
            std::cin>> *aux;
            Midia* temp = aux;
            remove_midia(m);
            insert_midia(temp);
        }else{
            Dvd* d = (Dvd*)(m);
            std::cout << *d << std::endl;
            Dvd* aux = new Dvd();
            std::cin>> *aux; 
            Midia* temp = aux;
            remove_midia(m);
            insert_midia(temp);
        }
    }
}