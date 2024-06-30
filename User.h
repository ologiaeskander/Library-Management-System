#pragma once
#include <iostream>
#include <string>
#include "Library.h"
using namespace std;

class User : public Library
{
protected:
	string name;
	string ID;
public:
	User() {}
	User(string n, string id) { name = n; ID = id; }
	void set_name(string n) { name = n; }
	void set_ID(string id) { ID = id; }
	string get_name() { return name; }
	string get_ID() { return ID; }
	void print_user() { cout << "User name: " << name << "\t User ID: " << ID; };
};