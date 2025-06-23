#ifndef USER_H
#define USER_H
#include <string>
#include "Cart.h"
class User {
public:
	string name;
	Cart cart;

	User(string n);
};
#endif
