#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <map>          // Used to track product quantities
#include "Product.h"

// This class represents a shopping cart
class Cart {
private:
    map<Product*, int> items;  // Each product and how many of it is in the cart

public:
    void addProduct(Product* p, int qty); // Add a product to the cart
    void showCart();                      // Print what's in the cart
    double getTotal();                    // Calculate total cost
    void checkout();                      // "Buy" everything and reduce stock
};

#endif