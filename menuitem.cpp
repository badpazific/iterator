#include "menuitem.h"

MenuItem::MenuItem(string n, string d, bool v, double p) {
    this->name = n;
    this->description = d;
    this->vegetarian = v;
    this->price = p;
}

string MenuItem::getName(){
    return name;
}

string MenuItem::getDescription(){
    return description;
}

double MenuItem::getPrice(){
    return price;
}

bool MenuItem::isVegetarian(){
    return vegetarian;
}

string MenuItem::toString(){
    return name + ", $" + to_string(price) + "\n   " + description;
}

