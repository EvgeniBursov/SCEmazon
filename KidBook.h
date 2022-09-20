#include "Product.h"
#include"Book.h"

class KidBook : public Book, public Product
{
protected:
	int _minAge;


public:
	KidBook() :Book(), Product() {}
	KidBook(float price, long serial, string name, int year, int pages, int age) :Product(price, serial), Book(name, year, pages) { _minAge = age; } //////////
	KidBook(const KidBook& other) :Product(other), Book(other) { _minAge = other._minAge; }
	virtual ~KidBook() {}

	virtual void print();


};
