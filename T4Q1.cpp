#include <iostream>
#include <string>
using namespace std;

class Purchase
{
private:
    int qty;
    float price;
    string itemName;
    float total;

public:
    Purchase(string name, int quantity, float p);

    void set_data(string name, int quantity, float p);
    void calculate();
    void print();
    void printtotal(int totalQty, float grandTotal);
};

Purchase::Purchase(string name, int quantity, float p)
{
    itemName = name;
    qty = quantity;
    price = p;
    total = 0;
}

void Purchase::set_data(string name, int quantity, float p)
{
    itemName = name;
    qty = quantity;
    price = p;
    total = 0;
}

void Purchase::calculate()
{
    total = qty * price;
}

void Purchase::print()
{
    cout << "==============================" << endl;
    cout << "Subtotal : RM " << total << endl;
    cout << "==============================\n" << endl;
}

void Purchase::printtotal(int totalQty, float grandTotal)
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "           GRAND TOTAL           " << endl;
    cout << "=================================" << endl;
    cout << "Total number of items : " << totalQty << endl;
    cout << "Total amount to pay   : RM " << grandTotal << endl;

}

int main()
{
    string item;
    int quantity;
    float price;

    int totalQuantity = 0;
    float grandTotal = 0;

    Purchase p1("", 0, 0);

    cout << "==============================" << endl;
    cout << "           WELCOME            " << endl;
    cout << "==============================" << endl;

    while (true)
    {
        cout << "Enter item ('Q' to quit): ";
        cin >> item;

        if (item == "Q" || item == "q")
        {
            break;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        cout << "Enter price   : RM ";
        cin >> price;

        p1.set_data(item, quantity, price);
        p1.calculate();
        p1.print();

        totalQuantity += quantity;
        grandTotal += quantity * price;
    }

    p1.printtotal(totalQuantity, grandTotal);

    return 0;
}