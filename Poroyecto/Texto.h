#include <iostream>
#include <windows.h>
using namespace std;

void Texto_1(string tu){
    system("cls");
    Sleep(500);
    cout << "\n\n\n\nUn dia como cualquier otro, te encuentras haciendo tu caminata de cada manana." << endl;
    cout << "A pesar de conocer el cerro detras de tu casa como la palma de tu mano, aparece un pino que no" << endl;
    cout << "recuerdas haber visto antes." << endl;
    cout << "Te acercas al arbol por curiosidad, pero justo cuando das tu primer paso hacia su direccion" <<endl;
    cout << "sientes que el suelo en tus pies desaparece." <<endl;
    cout<<endl;
    system("pause");
    cout<< "\nEmpiezas a caer, y comienzas a asustarte pues sabes que no sobrevivirias una caida de tal altura."<<endl;
    cout<<"Despues de un rato cayendo, ya no sabes si es lo que te esta pasando es un sueno o es real."<<endl;
    cout<<"Has caido tanto que ya no llega ningun tipo de luz a donde vas, solo tienes la constante sensacion de estar cayendo."<<endl;
    cout<<"Comienzas a ver una luz, esperandote al final de tu caida."<<endl;
    cout<<"Luego comienzas a sentir tan cerca tu caida que solo cierras tus ojos."<<endl;
    cout<<endl;
    system("pause");
    cout<<"\nCaes, y extranado de seguir vivo, te das cuenta que aterrizaste sobre una cama de flores."<<endl;
    cout<<"Todavia extranado y asustado, sales de la cama compuesta de margaritas, girasoles y otras flores."<<endl;
    cout<<"Y frente a ti se encuentra un girasol mucho mas grande de lo normal, pero eso no es lo mas extrano."<<endl;
    cout<<"Te das cuenta que la flor gigante tiene rostro, te asustas, pero no tienes a donde huir o escapar."<<endl;
    cout<<"En eso, escuchas a la flor hablar."<<endl;
    cout<<endl;
    system("pause");
    cout<<"\n - Flor con rostro: Hola, bienvenido a las profundidades; Que te trae por aqui­?"<<endl;
    Sleep(6500);
    cout<<"\n - "<<tu<<": "<<" Umm, hola... Solo estaba caminando por el cerro, y de pronto cai aqui."<<endl;
    Sleep(6500);
    cout<<"\n - Flor con rostro: Ooh, que interesante, entonces supongo que quieres regresar a tu hogar; no?"<<endl;
    Sleep(6500);
    cout<<"\n - "<<tu<<": "<<"Si, quisiera volver, pero estoy tan profundo que ni siquiera se si pueda escalar tanto."<<endl;
    Sleep(6500);
    cout<<"\n - Flor con rostro: No es necesario; simplemente tienes que vencer a los 3 monstruos que se encuentran en las salas"<<endl;
    cout<<"de esta cueva."<<endl;
    Sleep(6500);
    cout<<"\n - "<<tu<<": Umm, ojala sea tan facil como lo dices."<<endl;
    Sleep(5000);
    cout<<"\nY asi, en lo absurdo de la situacion, aceptaste la tarea que te dio la flor que habla, solo para salir de ahi."<<endl;
    cout<<"Tomaste una vieja espada y un arco de palo que se encontraban en el suelo."<<endl;
    cout<<"El arco se deshace cuando tratas de probarlo."<<endl;
    system("pause");
    cout<<"Observas a tu alrededor... ";
    Sleep(1500); 
    cout<<"hay 5 puertas enumeradas."<<endl;
};
void Texto_puerta1(){
    system("cls");
    cout<<endl<<endl;
    Sleep(100);
    cout<<"Te acercas a la primer puerta, la abres lentamente y frente a ti se muestra un monstruo que no conoces."<<endl;
    cout<<"A pesar de verse amenazador, no te ataca cuando te ve, y solo observas su mirada llena de dolor."<<endl;
    Sleep(100);
    cout<<"---- ATACAR ===== BUSCAR EN LA SALA ===== CONVERSAR ===== SALIR ----"<<endl;
    cout<<"Advertencia: escribe en minusculas la opcion."<<endl;
};
int Texto_salir(){
    int salir;
    cout<<"Estas seguro que deseas salir? No podras volver."<<endl;
    cout<<"Introduce 1 para salir, u otro numero para seguir aqui.";
    cin>>salir;
    return salir;
}
void Texto_puerta1ataque(Base_Personajes *personaje){
    system("cls");
    cout<<"ATACAR:"<<endl;
    personaje->Shoot();
    Monster1.Ataque();
    personaje->Shoot();
    cout<<endl;
    Sleep(2000);
    cout<<"Atacas al monstruo y a pesar de dar resistencia, despues de un rato no se mueve."<<endl;

};
void Texto_puerta1conversar(){
    system("cls");
    cout<<"CONVERSAR:"<<endl;
    Sleep(100);
    cout<<"Te da pena atacarlo antes, intentas hablar presentandonte."<<endl;
    Sleep(1000);
    cout<<"'Hola. Quisiera saber si tu sabes algo de como salir de aqui.'"<<endl;
    Sleep(4000);
    cout<<"El monstruo no habla algun idioma que conozcas, pero de alguna manera lo entiendes."<<endl;
    Sleep(4000);
    cout<<"El te dice que solo lo encerraron ahi, y que no recuerda mucho, por lo que no sera de mucha ayuda."<<endl;
    Sleep(4000);
    cout<<"Te parece curiosa la respuesta, quieres saber mas."<<endl;
    Sleep(4000);
    cout<<"Te ensenia la ubicacion de un cofre, dice que tal vez te sea mas util que a el"<<endl;
};
void Texto_puerta2(){
    system("cls");
    Sleep(100);
    cout<<"\nSales de la sala, ya no esta el girasol. Vas hacia la siguiente puerta."<<endl;
    cout<<"La abres con algo de miedo, pero te das cuenta que esta vacia."<<endl;
    cout<<"Solo hay un cofre con una nota encima."<<endl;
    cout<<"La nota es breve:";
    cout<<"'Quien reciba esta nota, espero que solamente no sea ese monstruo."<<endl;
    cout<<"No dejes que te atrape con sus amables palabras, no hay salida de aqui...'"<<endl;
    cout<<"Dejas la nota, y abres el cofre."<<endl;
    cout<<"Despues de dar una vuelta por la sala, regresas a la sala principal."<<endl;
};
void Texto_puerta3(){
    system("cls");
    Sleep(100);
    cout<<"\nTe quedan 3 salas por explorar, que haras?"<<endl;
    cout<<"Vas a la tercera puerta, la abres con cuidado."<<endl;
    cout<<"Todo esta oscuro, no ves nada, apenas pasas por la puerta, esta se cierra con rapidamente"<<endl;
    cout<<"y con ello, una fria brisa que te preguntas de donde viene."<<endl;
    cout<<"Cuando tus ojos se adaptan a la casi inexistente luz, visualizan una silueta."<<endl;
    cout<<"---- ATACAR ===== BUSCAR EN LA SALA ===== CONVERSAR ===== SALIR ----"<<endl;
};
void Texto_puerta3ataque(){
    system("cls");
    Sleep(100);
    cout<<"Te aproximas a atacar, pero justo cuando tu espada lo va a tocar, empieza a volar."<<endl;
    cout<<"Lo atacas"<<endl;
    cout<<"Despues de un rato de intentar escapar, el monstruo cae, y antes de morir, intenta decir algo pero no logras entender."<<endl;
    cout<<"Justo en el lugar de su muerte, encuentras un cofre; abrir?"<<endl;
    Sleep(100);
    cout<<"Salir de la sala?"<<endl;
};
void Texto_puerta3conversar(string tu){
    system("cls");
    cout<<"CONVERSAR"<<endl;
    cout<<"Te presentas ante un monstruo, esta vez, reconoces el lenguaje, habla un pobre espaniol"<<endl;
    cout<<"- Monstruo: Quien eres? Donde esta 'el'?"<<endl;
    cout<<"- "<<tu<<": Quien es 'el'?"<<endl;
    cout<<"- Monstruo: Si tu aqui, tu deber conocerlo"<<endl;
    cout<<"- "<<tu<<": Hablas de la flor?"<<endl;
    cout<<"- Monstruo: Si... yo odio flor."<<endl;
    cout<<"- "<<tu<<": Oye, no se porque dices eso, pero quiero salir de aqui, y para lograrlo, lo siento, pero tengo que matarte."<<endl;
    cout<<"\nTomas tu arma y te diriges a la silueta."<<endl;
    cout<<"- Monstruo: NOO, no matarme, ten caja, yo vivir, por favor."<<endl;
    cout<<"- Tu: No se que hacer contigo..."<<endl;
    cout<<"MATAR o DEJAR VIVIR"<<endl;
};
void Texto_puerta3conversarM(){
    system("cls");
    cout<<"MATAR:"<<endl;
    cout<<"No tuviste piedad y atravesaste al monstruo con una flecha; abres el cofre?"<<endl;
    cout<<"Salir?"<<endl;
    cout<<"\nNo te molestas en buscar mas en la sala, y vuelves al lugar donde caiste."<<endl;
};
void Texto_puerta3conversarD(){
    system("cls");
    cout<<"DEJAR VIVIR:"<<endl;
    cout<<"Tuviste piedad del pobre indefenso, tomas lo contenido en el cofre."<<endl;
    cout<<"Salir?"<<endl;
    cout<<"\nNo te molestas en buscar mas en la sala, y vuelves al lugar donde caiste."<<endl;
};
void Texto_puerta4(){
    system("cls");
    cout<<"\nTe acercas a la puerta 4, cuando la abres sientes un calor abrasador."<<endl;
    cout<<"No te gustaria, pero entras de todas maneras."<<endl;
    cout<<"Dentro ves un monstruo escarvando, intentando hacer un tunel a pesar de estar encadenado."<<endl;
    cout<<"Te acercas poco a poco."<<endl;
    cout<<"---- ATACAR ===== BUSCAR EN LA SALA ===== CONVERSAR ===== SALIR ----"<<endl;
};
void Texto_puerta4ataque(){
    system("cls");
    cout<<"ATACAR:"<<endl;
    cout<<"Atacas al monstruo y contesta tus ataques."<<endl;
    cout<<"Despues de una ardua batalla, el monstruo cae."<<endl;
    cout<<"'Pudimos habernos ido, ingenuo...' son sus ultimas palabras antes de fallecer."<<endl;
    cout<<"Encuentras un cofre algo empolvado. Abrir?"<<endl;
    cout<<"Salir?"<<endl;
    cout<<"Sales de la sala, ya solo queda una."<<endl;
};
void Texto_puerta4conversar(string tu){
    system("cls");
    cout<<"CONVERSAR:"<<endl;
    cout<<"- "<<tu<<": Hey, que estas haciendo?"<<endl;
    cout<<"- Monstruo: Eh? Y tu quien eres? Bueno, no importa, si no me has matado es porque no estas de lado de esa cosa."<<endl;
    cout<<"- "<<tu<<": No se de que hablas. No entiendo de que hablan todos, yo solo quiero salir de aqui"<<endl;
    cout<<"- Monstruo: Aah, con que tu tambien quieres salir, entonces ayudame a seguir cavando. Rapido."<<endl;
    cout<<"- "<<tu<<": Umm, no creo que podamos salir de aqui con un tunel."<<endl;
    cout<<"- Monstruo: Ok, si no vas a ayudar no estorbes y largate. Solo toma lo que hay en ese cofre y vete."<<endl;
    cout<<"- "<<tu<<": Gracias... Supongo."<<endl;
    cout<<"Te acercas al cofre. Abrir?"<<endl;
    cout<<"Salir?"<<endl;
    cout<<"Sales de la sala, ya solo queda una."<<endl;
};
void Texto_puerta5(string tu){
    system("cls");
    cout<<"\nVuelves a la sala principal."<<endl;
    cout<<"Te acercas a la ultima puerta que te hace falta por revisar. La abres y te abruma la luz que proviene de ahi"<<endl;
    cout<<"Entras y, una vez mas, una habitacion vacia. Solo un cofre y una carta"<<endl;
    cout<<"\n'No aguanto mas, desde que cai aqui no he hecho mas que sufrir, solo por hacerle caso a esa flor..."<<endl;
    cout<<"No sirvio de nada todo lo que hice, no se puede salir de aqui, no se si 'el' no quiere..."<<endl;
    cout<<"Quisiera no haber hecho todo eso, y al menos conservar mi humanidad...'"<<endl;
    cout<<"\nMuchas cosas pasan por tu cabeza, pero tu conclusion es que el verdadero enemigo, es esa flor..."<<endl;
    cout<<"Tomas lo del cofre."<<endl;
    cout<<"\nY sales de la habitacion iluminada. Ahi te espera la flor."<<endl;
};
void Texto_final(string tu){
    system("cls");
    cout<<"- Flor con rostro: Como te fue? Acabaste con todos?"<<endl;
    cout<<"- "<<tu<<": Solo dime como salir de aqui."<<endl;
    cout<<"- Flor con rostro: Ummm, apenas estaba comenzando a ser divertido. Creo que te quedaras un tiempo mas aqui"<<endl;
    cout<<"- Tu: No lo creo, si es necesario, te sacare la informacion a la fuerza."<<endl;
    cout<<"- Flor con rostro: Y esa agresividad? Claro que no es necesario... Solo acepta tu destino."<<endl;
    cout<<"Arremetes contra la flor."<<endl;
    cout<<"Despues de la pelea, muy cansado observas en tu mano una marca en forma de flor, caes desmayado."<<endl;
};
void Texto_fin(){
    system("cls");
    cout<<"\nDespiertas debajo de un arbol cerca de tu casa. Te preguntas si todo fue solo un suenio."<<endl;
    cout<<"Pero ves la marca en tu brazo, y solo te queda recordar lo que paso."<<endl;
    cout<<"\n\nFIN.\n\n"<<endl;
};