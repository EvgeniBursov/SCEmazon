#include"ActionMovie.h"

ActionMovie::ActionMovie(float price, long serial, string name, int year, int level):Product(price,serial),Movie(name,year)
{
	_price = 20;
	_actionLevel = level;

}
ActionMovie::ActionMovie(const ActionMovie& other):Product(other),Movie(other)
{
	_actionLevel = other._actionLevel;

}

void ActionMovie::print()
{
	cout << "The serial number: " << _serialNum << endl;
	cout << "The name of movie: " << _nameMovie << " public in: " << _year << " year" << endl;
	cout << "The action level " << _actionLevel << " price of movie: " << _price << endl;


}
