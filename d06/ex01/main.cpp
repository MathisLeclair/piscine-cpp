#include <string>
#include <iostream>

struct rdata {
    char a[8];
    int b;
    char c[8];
};

struct Data { std::string s1;
int n; std::string s2; };

char randomChar(void){
    const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    return (alphanum[rand() % sizeof(alphanum)]);
}

void * serialize( void ){
    rdata * stuff = new rdata();
    for (size_t i = 0; i < 8; i++) {
        stuff->a[i] = randomChar();
    }
    stuff->b = rand();
    for (size_t i = 0; i < 8; i++) {
        stuff->c[i] = randomChar();
    }
    std::cout << "serialized:" << stuff->a << " " << stuff->b << " " << stuff->c << std::endl;
    return stuff;
}

Data * deserialize( void * raw ){
    Data *d = new Data();
    rdata *e;
    e = reinterpret_cast<rdata*>(raw);
    d->s1 = std::string(e->a,0 ,8);
    d->n = e->b;
    d->s2 = std::string(e->c,0, 8);
    return d;
}

int main(void){
    srand(time(NULL));
    void *truc;
    Data *truc2;

    truc = serialize();
    truc2 = deserialize(truc);
    std::cout << "deserialize:" << truc2->s1 << " " << truc2->n << " " << truc2->s2 << std::endl;

}
