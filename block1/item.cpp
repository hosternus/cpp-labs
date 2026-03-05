#include "item.hpp"
#include <iostream>

using namespace std;

string supplierToString(Supplier s) {
    switch (s) {
        case RETAIL:
            return "Retail";
        case WHOLESALE:
            return "Wholesale";
        case MANUFACTURER:
            return "Manufacturer";
        default:
            return "Unknown";
    }
}

Item::Item(size_t id, double cost, string name, Supplier supplier) : id(id), cost(cost), name(name), supplier(supplier) {}
Item::~Item() {}

size_t Item::get_id() const { return this->id; }
double Item::get_cost() const { return this->cost; }
string Item::get_name() const { return this->name; }
Supplier Item::get_supplier() const { return this->supplier; }

void Item::set_id(size_t id) { this->id = id; }
void Item::set_cost(double cost) { this->cost = cost; }
void Item::set_name(string& name) { this->name = name; }
void Item::set_supplier(Supplier supplier) { this->supplier = supplier; }

void Item::short_view() const {
    cout << "Item lookup:" << endl;
    cout << "Item ID: " << this->get_id() << endl;
    cout << "Item Name: " << this->get_name() << endl;
}
void Item::full_view() const {
    cout << "Item details:" << endl;
    cout << "Item ID: " << this->get_id() << endl;
    cout << "Item Cost: " << this->get_cost() << endl;
    cout << "Item Name: " << this->get_name() << endl;
    cout << "Item Supplier: " << supplierToString(this->get_supplier()) << endl;
}
