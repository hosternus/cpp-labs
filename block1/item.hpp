#include <string>

using namespace std;

enum Supplier {
    RETAIL,
    WHOLESALE,
    MANUFACTURER
};
string supplierToString(Supplier s);

class Item {
    private:
        size_t id;
        string name;
        double cost;
        Supplier supplier;

    public:
        Item(size_t id, double cost, string name, Supplier supplier);
        ~Item();

        double get_cost() const;
        size_t get_id() const;
        string get_name() const;
        Supplier get_supplier() const;

        void set_cost(double cost);
        void set_id(size_t id);
        void set_name(string& name); 
        void set_supplier(Supplier supplier);

        void short_view() const;
        void full_view() const;
};
