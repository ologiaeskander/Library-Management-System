#pragma once
#include <string>
#include "User.h"
#include "Book.h"
using namespace std;

class Librarian : public User
{
public:
	Librarian() {}
	~Librarian() {}
	void add_copy(Book b) { b.copies++; b.available++; }
	void add_copies(Book b, int n) { b.copies += n; b.available += n; }
};