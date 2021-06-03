#ifndef Item_h
#define Item_h

class Item {
protected:
    string name;
    string description;
public:
    Item();
    Item(string);
    virtual void use_equip();
    virtual void desc();
};
Item::Item(){
    name = "";
    description = "";
}
Item::Item(string in_name){
    name = in_name;
}
void Item::use_equip(){
    cout<<"ERROR: No hay un Item definido."<<endl;
}
void Item::desc(){
    cout<<"ERROR: No hay un Item definido."<<endl;
}

#endif