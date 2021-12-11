#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H

#include <list>
#include "menu.h"
#include "menuitem.h"
#include "pancakehousemenuiterator.h"

class PancakeHouseMenu : public Menu {
	private:
		list<MenuItem*> menuItems;
	public:
		PancakeHouseMenu();
		void addItem(string n, string d, bool v, double p);
		list<MenuItem*> getMenuItems();
		Iterator* createIterator();
		string toString();
};

#endif
