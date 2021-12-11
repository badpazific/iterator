#ifndef WAITRESS_H
#define WAITRESS_H

#include "dinermenu.h"
#include "pancakehousemenu.h"
#include "iterator.h"

class Waitress {
	private:
		PancakeHouseMenu *pancakeHouseMenu;
		DinerMenu *dinerMenu;
	public:
		Waitress(PancakeHouseMenu *pancakeHouseMenu, DinerMenu *dinerMenu);
		void printMenu();
		void printMenu(Iterator *iterator);
};

#endif
