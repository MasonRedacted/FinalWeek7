// FinalWeek7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "User.h"  
#include "Product.h"  
#include "Cart.h"
#include <thread>
#include <iostream>
#include <mutex>


std::mutex cartMutex; // Mutex for synchronizing access to the cart
static void userSession(User* user, Product* p) {  
	cartMutex.lock(); // Lock the mutex to ensure thread-safe access to the cart
    user->cart.addProduct(p, 1);  
    user->cart.showCart();  
    user->cart.checkout();  
	// Simulate some delay for the user session
    cartMutex.unlock();

}  

int main() {  
    // Product listings  
    Product medicine("Allegra", 8.99, 45);  
    Product candy("Skittles", 1.99, 100);  

    // Simulated users  
    User alex("Alex");  
    User mason("Mason");  

    // Running threads  
    thread alexSession(userSession, &alex, &medicine);  
    thread masonSession(userSession, &mason, &candy);  

    alexSession.join(); // Wait for Alex's session to finish  
    masonSession.join(); // Wait for Mason's session to finish  
    return 0;  
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
