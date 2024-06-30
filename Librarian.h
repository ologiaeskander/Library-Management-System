#pragma once
#include <string>
#include "Library.h"
#include "User.h"
#include "Book.h"
using namespace std;

class Librarian : public User, Library
{
public:
	Librarian() {}
	~Librarian() {}
	bool add_book(Book b) { Books [++nofBooks] = b; }
	void add_copy(Book b) { b.copies++; b.available++; }
	void add_copies(Book b, int n) { b.copies += n; b.available += n; }
};