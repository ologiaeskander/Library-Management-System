#include "Library.h"
#include <iostream>
Library::Library()
{ 
	int d, m, y;
	nofBooks = 0;
	cout << "Please Enter Today's date: \nDay: ";
	cin >> d;
	cout << "Month: ";
	cin >> m;
	cout << "Year: ";
	cin >> y;
	//date today(d, m, y);
}