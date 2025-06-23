#include <unordered_map> // Include the header for unordered_map  
#include "Cart.h"  
#include "Product.h"  

void Cart::addProduct(Product* p, int qty) {
    items[p] += qty;
}

void Cart::showCart() {
    for (auto item : items) {

        //Shows the quantity of the product and the price
        cout << item.second << "x " << item.first->getName()
            << " ($" << item.first->getPrice() << " each)" << endl;
    }
}

double Cart::getTotal() {
    double total = 0;
    for (auto item : items) {

        //this adds up the cart total
        total += item.first->getPrice() * item.second;
    }
    return total;
}

// This function checks out the cart, reducing stock and displaying the total
void Cart::checkout() {
    cout << "--- Checkout ---" << endl;
    for (auto item : items) {
        if (item.first->reduceStock(item.second)) {
            cout << item.second << "x " << item.first->getName() << " purchased." << endl;
        }
        else {
            cout << "Not enough stock for " << item.first->getName() << endl;
        }
    }
    cout << "Total: $" << getTotal() << endl;
    items.clear();
}
