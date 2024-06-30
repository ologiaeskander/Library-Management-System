#include "Book.h"
Book::Book(string isbn, string title, string author, string publisher, int year, float price)
{
	this->isbn = isbn;
	this->title = title;
	this->author = author;
	this->publisher = publisher;
	this->year = year;
	this->price = price;
	copies = 1;
	available = 1;
}