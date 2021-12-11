#ifndef MENU_H
#define MENU_H

#include "iterator.h"

class Menu {
public:
    virtual Iterator *createIterator() = 0;
};

#endif // MENU_H

