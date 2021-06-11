#ifndef Enemy_h
#define Enemy_h

class Enemigo{
    public:
        Enemigo();
        Enemigo(int,string,int);
        void Damage(double);
        void Muerte();
        virtual void Ataque() = 0;
    protected:
        int damage;
        string name;
        int vida;
};
Enemigo::Enemigo(){
    damage = 5;
    name = "";
    vida = 50;
};
Enemigo::Enemigo(int d,string n,int v){
    damage = d;
    name = n;
    vida = v;
};
void Enemigo::Damage(double dam){
    vida = vida - dam;
    if(0==vida){Muerte();};
};
void Enemigo::Muerte(){
    cout<<"\nMonstruo: Aaaghghhhhhhh..."<<endl;
};

#endif