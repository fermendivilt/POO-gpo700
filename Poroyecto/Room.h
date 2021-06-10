// Room.h

#ifndef Room_h
#define Room_h

class Room {
    private:
        string name; // norte, sur, este, oeste, salida
        string description;
        vector <Item*> vecItemRoom;
    public:
        Room();
        Room(string, string);
        void getDatos(string*, string*);
        void showInventoryRoom();
        // add Gem
        void addItemFlower(Flowers);
        void addItemWeapon(listWea);
};
Room::Room() {    // Default Constructor
    name = "Room sin nombre";
    description = "Este Room no ha sido inicializado";
    // vecItemRoom = nullptr;
}
Room::Room(string n, string d) {    // Default Constructor
    name = n;
    description = d;
}
void Room::addItemFlower(Flowers in){
    Item *objItems;
    objItems = new Flower(in);
    vecItemRoom.push_back(objItems);
}
void Room::addItemWeapon(listWea in){
    Item *objItems;
    objItems = new Weapon(in);
    vecItemRoom.push_back(objItems);
}
void Room::getDatos(string* n, string* d) {
    *n = name;
    *d = description;
    // *v = vecItemRoom;
}
void Room::showInventoryRoom(){
    for (int i=0; i < vecItemRoom.size(); i++) {
        vecItemRoom[i]->desc();
    }
}


#endif