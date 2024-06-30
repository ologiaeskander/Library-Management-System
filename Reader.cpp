#include "Reader.h"
bool Reader::borrow_book(Book b)
{
	if (!b.available)
		return 0;
	b.available--;
	//b.borrowHistory[++b.n] = {this, today};
}
void Reader::return_book(Book b)
{
	b.available++;
}