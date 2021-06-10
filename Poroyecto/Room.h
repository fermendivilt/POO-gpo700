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
        void addItemGem(string g, string d, int live){
            Item *objItems;
            objItems = new Gem(g, d, live);
            vecItemRoom.push_back(objItems);
        }
        void addItemPotion(string p, string d, int live){
            Item *objItems;
            objItems = new Potion(p, d, live);
            vecItemRoom.push_back(objItems);
        }
        void addItemKey(string k, string d, int live){
            Item *objItems;
            objItems = new Key(k, d, live);
            vecItemRoom.push_back(objItems);
        }
        void addItemCoin(string c, string d, int live){
            Item *objItems;
            objItems = new Coin(c, d, live);
            vecItemRoom.push_back(objItems);
        }
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

void Room::getDatos(string* n, string* d) {
    *n = name;
    *d = description;
    // *v = vecItemRoom;
}

void Room::showInventoryRoom(){
    for (int i=0; i < vecItemRoom.size(); i++) {
        vecItemRoom[i]->showIInventory();
    }
}


#endif