#pragma once
#include "Book.h"
using namespace std;

class Library
{
public:
	//static struct date { int day; int month; int year; date(){} date(int d, int m, int y) { day = d; month = m; year = y; } };
	//static date today;
	static Book Books[100]; //assuming the library has storage for 100 books only for simplicity
	static int nofBooks;

	Library();
	~Library() {}
	friend class Librarian;
};