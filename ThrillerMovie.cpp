#include"ThrillerMovie.h"

ThrillerMovie::ThrillerMovie(float price, long serial, string name, int year, int level) :Product(price, serial), Movie(name, year)
{
	_price = 20;
	_thrillerLevel = level;

}
ThrillerMovie::ThrillerMovie(const ThrillerMovie& other) :Product(other), Movie(other)
{
	_thrillerLevel = other._thrillerLevel;

}

void ThrillerMovie::print()
{
	cout << "The serial number: " << _serialNum << endl;
	cout << "The name of movie: " << _nameMovie << " public in: " << _year << " year" << endl;
	cout << "The action level " << _thrillerLevel << " price of movie: " << _price << endl;


}
