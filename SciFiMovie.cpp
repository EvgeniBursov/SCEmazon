#include"SciFiMovie.h"


SciFiMovie::SciFiMovie(float price, long serial, string name, int year, int level) :Product(price, serial), Movie(name, year)
{
	_price = 20;
	_sciLevel = level;

}
SciFiMovie::SciFiMovie(const SciFiMovie& other) :Product(other), Movie(other)
{
	_sciLevel = other._sciLevel;

}

void SciFiMovie::print()
{
	cout << "The serial number: " << _serialNum << endl;
	cout << "The name of movie: " << _nameMovie << " public in: " << _year << " year" << endl;
	cout << "The action level " << _sciLevel << " price of movie: " << _price << endl;


}
