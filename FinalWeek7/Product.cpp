#include "Product.h"

using namespace std;


Product::Product(string n, double p, int s) : name(n), price(p), stock(s) {}

string Product::getName() { return name; }

double Product::getPrice() { return price; }

int Product::getStock() { return stock; }

void Product::updateStock(int amount) {
    stock += amount;
    if (stock < 0) stock = 0;
}

bool Product::reduceStock(int amount) {
    if (stock >= amount) {
        stock -= amount;
        return true;
    }
    return false;
}

void Product::print() {
    cout << "Product Name: " << name << endl;
    cout << "Price: $" << price << endl;
    cout << "Stock: " << stock << endl;
    cout << "------------------------" << endl;
}