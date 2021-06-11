#include "Enemy.h"

class Monster1 : public Enemigo{
    public:
        Monster1();
        Monster1(string *,int *,int *);
        void Ataque();
};
void Monster1::Ataque(){
    cout<<name<<" HA ATACADO LANZNADO PIEDRAS. INFLINGE "<<damage*1.2<<" DE DANO FISICO!"<<endl;
};
class Monster2 : public Enemigo{
    public:
        Monster2();
        Monster2(string *,int *,int *);
        void Ataque();
};
void Monster2::Ataque(){
    cout<<name<<" HA ATACADO CON UNA PEQUENA EXPLOSION. INFLINGE "<<damage*1.6<<" DE DANO MAGICO!"<<endl;
};

class Monster3 : public Enemigo{
    public:
        Monster3();
        Monster3(string *,int *,int *);
        void Ataque();
};
void Monster3::Ataque(){
    cout<<name<<" HA HECHIZADO. INFLINGE "<<damage*1.8<<" DE DANO MAGICO!"<<endl;
};

class Flor : public Enemigo{
    public:
        Flor();
        Flor(string *,int *,int *);
        void Ataque();
};
void Flor::Ataque(){
    cout<<name<<" TE HA ENREDEDADO. INFLINGE "<<damage*2.5<<" DE DANO VERDADERO!"<<endl;
};