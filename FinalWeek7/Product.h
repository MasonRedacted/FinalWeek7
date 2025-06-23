#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

// This class stores information about a product
class Product {
private:
    string name;
    double price;
    int stock;  // How many items are in stock

public:
    Product(string n, double p, int s);  // Constructor

    // Getters for each private variable
    string getName();
    double getPrice();
    int getStock();

    // Update stock amount
    void updateStock(int amount);

    // Try to reduce stock, return false if not enough
    bool reduceStock(int amount);

    // Print the product details
    void print();
};

#endif // PRODUCT_H