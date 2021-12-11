#include "waitress.h"

Waitress::Waitress(PancakeHouseMenu *pancakeHouseMenu, DinerMenu *dinerMenu) {
	this->pancakeHouseMenu = pancakeHousemenu;
	this->dinerMenu = dinermenu;
}

void Waitress::printMenu() {
	Iterator *dinerIterator = dinerMenu->createIterator();
	Ierator *pancakeIterator = pancakeHouseMenu->createIterator();
	
	cout << "MENU\n----\nBREAKFAST" << endl;
	printMenu(pancakeIterator);
	cout << "\nLUNCH" << endl;
	printMenu(dinerIterator);
}

void Waitress::printMenu(Iterator *iterator) {
	while (iterator->hasNext()) {
		MenuItem *menuItem = (MenuItem*)iterator->next();
		count << menuItem->getName() << ", ";
		count << menuItem->getPrice() << "-- ";
		count << menuItem->getDescripyion() << endl;
	}
}
