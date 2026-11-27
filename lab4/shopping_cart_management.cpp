#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Item
{
public:
    string Name;
    int quantity;
    double price;
};

void displayCart(const vector<Item> &cart)
{
    cout << "\nName\tQuantity\tPrice\tTotal\n";

    for (auto item : cart)
    {
        cout << item.name << "\t" << item.quantity
             << "\t\t" << item.price
             << "\t" << item.quantity * item.price << endl;
    }
}

double calculateTotal(const vector<Item> &cart)
{
    double total = 0;

    for (auto item : cart)
        total += item.quantity * item.price;

    return total;
}

void applyDiscount(vector<Item> &cart)
{
    for (auto &item : cart)
    {
        if (item.price > 1000)
            item.price *= 0.90;
    }
}

Item findMostExpensiveItem(const vector<Item> &cart)
{
    Item expensive = cart[0];

    for (auto item : cart)
    {
        if (item.price > expensive.price)
            expensive = item;
    }

    return expensive;
}

int main()
{
    vector<Item> cart;
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Item item;

        cout << "Enter name, quantity and price: ";
        cin >> item.name >> item.quantity >> item.price;

        cart.push_back(item);
    }

    cout << "\nShopping Cart:";
    displayCart(cart);

    cout << "\nTotal Amount: Rs. "
         << calculateTotal(cart) << endl;

    if (!cart.empty())
    {
        Item expensive = findMostExpensiveItem(cart);

        cout << "\nMost Expensive Item: "
             << expensive.name << endl;

        applyDiscount(cart);

        cout << "\nCart After Discount:";
        displayCart(cart);

        cout << "\nUpdated Total: Rs. "
             << calculateTotal(cart) << endl;
    }

    return 0;
}