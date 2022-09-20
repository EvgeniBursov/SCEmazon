#include"AdultBook.h"

AdultBook::AdultBook(float price, long serial, string name, int year, int pages, string genre) :Product(price, serial), Book(name, year, pages)
{
	//_minAge = age;
	float newPrice = _pages * 2;
	if (newPrice >= 100)
		_price = 100;
	else if (newPrice <= 10)
		_price = 10;
	else
		_price = newPrice;

}

void AdultBook::print()
{
	cout << "The serial number: " << _serialNum << endl;
	cout << "The name of book: " << _bookName << ' ' << _pages << " pagase" << " public in: " << _year << " year" << endl;
	cout << "genre for this book: " << _genre << " price of book: " << _price << endl;

}
