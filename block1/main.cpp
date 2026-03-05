#include "item.hpp"
#include <iostream>

using namespace std;

int main() {
    Item item(1, 100.0, "Item 1", RETAIL);
    item.short_view();
    cout << endl;
    item.full_view();
    return 0;
}
