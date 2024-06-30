#pragma once
#include <string>
using namespace std;

class Book
{
	string isbn; //basically an ID
	string title;
	string author;
	string publisher;
	int year;
	float price;
	int copies; //number of  copies
	int available; //number of available copies
public:
	Book() { copies = 1; available = 1; }
	Book(string isbn, string title, string author, string publisher, int year, float price);
	~Book() {}

	void set_isbn(string isbn) { this->isbn = isbn; }
	void set_title(string t) { title = t; }
	void set_author(string a) { author = a; }
	void set_publisher(string p) { publisher = p; }
	void set_year(int y) { year = y; }
	void set_price(float p) { price = p; }
	void add_copy() { copies++; available++; }
	void add_copies(int n) { copies += n; available += n; }

	string get_isbn() { return isbn; }
	string get_title() { return title; }
	string get_author() { return author; }
	string get_publisher() { return publisher; }
	int get_year() { return year; }
	float get_price() { return price; }
	int get_copies() { return copies; }
	int get_available() { return available; }

	bool is_available() { return (available == 0) ? 0 : 1; }

	friend class Reader;
	friend class Librarian;
};