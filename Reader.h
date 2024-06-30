#pragma once
#include <string>
#include "Library.h"
#include "User.h"
#include "Book.h"
using namespace std;

class Reader : public User, Library
{
public:
	Reader() {}
	~Reader() {}
	bool borrow_book(Book b); //returns 1 if successful and 0 if the book is unvailable
	void return_book(Book b);
};