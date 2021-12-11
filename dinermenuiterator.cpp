#include "dinermenuiterator.h"

DinerMenuIterator::DinerMenuIterator(vector<MenuItem*> items) {
    position = 0;
	this->items = items;
}

bool DinerMenuIterator::hasNext(){
    MenuItem *menuItem = items[position];
    position++;
    return menuItem;
}

bool DinerMenuIterator::hasNext() {
    if (position >= 6 || &items[position] == nullptr) {
        return false;
    }
    else {
        return true;
    }
}

