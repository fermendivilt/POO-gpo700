#ifndef Item_h
#define Item_h

class Item {
protected:
    string name;
    string description;
public:
    Item();
    Item(string, string);
    virtual void use_equip();
    virtual void desc();
};
Item::Item(){
    name = "";
    description = "";
}
Item::Item(string in_name, string in_description){
    name = in_name;
    description = in_description;
}
void Item::use_equip(){
    cout<<"ERROR: No hay un Item definido."<<endl;
}
void Item::desc(){
    cout<<"ERROR: No hay un Item definido."<<endl;
}

#endif