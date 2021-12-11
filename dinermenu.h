#ifndef DINERMENU_H
#define DINERMENU_H

#include "vector"
#include "menu.h"
#include "menuitem.h"
#include "dinermenuiterator.h"


class DinerMenu : public Menu {
private:
    static const int MAX_ITEMS = 6;
    int numberOfItems;
    vector<MenuItem*> menuItems;
    public:
    DinerMenu();
    void addItem(string n, string d, bool v, double p);
    vector<MenuItem*> getMenuItems();
    Iterator *createIterator();
};

#endif // DINERMENU_H
