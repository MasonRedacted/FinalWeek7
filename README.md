# FinalWeek7

This is my final project for Week 7.
For my final project I created and simulated an online shopping platform through a console application using basic C++. I organized the project into separate files like Product, Cart and user. I also used multithreading to simulate multiple people shopping at once.

Product.cpp 
This file contains functions for the product class, the constructor sets the name, price, and stock. There are also getters for each value. updateStock adds and subtracts, and won't let it go into the negatives. The reduceStock method is only used when the customer checks out, it makes sure there is stock, and substracts the amount they purchased. 

Product.h
This is the header for product.pp
It defines the private variables for name, price, and stock. It also includes the guard to prevent the file from being imported more than once.

Cart.cpp
This contains the functionality for the shopping cart.
addproduct increases the amount of items in the cart, showCart prints the items in the cart, getTotal returns the total for the dollar amount of the items.

Cart.h
This is the header file for the Cart class.
It uses a map to keep track of items and their quantities, the class includes functions for adding products, showing the users cart, and calculating the total for the amount of items.

User.cpp
This file defines the constructor for the user class, it just stores the users name, and each user has their own cart.

User.h
This is the header file for the user class, each user has a name and cart object. I kept this simple.

Main.cpp
This is where the program is actually executed, I created two products, and two users. Each user runs on their own thread, adds an item to their cart, confirms the item in their cart, checks out, and displays the total. Works just like it would on amazon, technically.

