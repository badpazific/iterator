#include "dinermenu.h"
#include "pancakehousemenu.h"
#include"waitress.h"


int main() {
	DinerMenu *dinerMenu = new DinerMenu();
	PancakeHouseMenu *pancakeHouseMenu = new PancakeHouseMenu();
	
	Waitress *waiteress = new Waitress(pancakeHouseMenu, dinerMenu);
	waitress->printMenu();
	
	return 0;
}
