#include "dinermenu.h"

DinerMenu::DinerMenu() {
    numberOfItems = 0;
    }
    addItem("Vegetarian BLT",
        "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
    addItem("BLT",
        "Bacon with lettuce & tomato on whole wheat", false, 2.99);
    addItem("Soup of the day",
        "Soup of the day, with a side of potato salad", false, 3.29);
    addItem("Hotdog",
        "A hot dog, with saurkraut, relish, onions, topped with cheese",
        false, 3.05);
    addItem("Steamed Veggies and Brown Rice",
        "Steamed vegetables over brown rice", true, 3.99);
    addItem("Pasta",
        "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
        true, 3.89);
}

void DinerMenu::addItem(string n, string d, bool v, double p) {
    MenuItem *menuItem = new MenuItem(n, d, v, );
    if (numberOfItems >= MAX_ITEMS) {
        cout << "Sorry, menu is full!  Can't add item to menu" << endl;
    }
    else {
        menuItems.push_back(menuItem);
        numberOfItems = ++;
    }
}

vector<MenuItem*> DinerMenu::getMenuItems() {
    return menuItems;
}

Iterator* DinerMenu::createIterator() {
    return new DinerMenuIterator(menuItems);
}
