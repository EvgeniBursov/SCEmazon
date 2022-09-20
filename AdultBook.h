#include "Product.h"
#include"Book.h"

class AdultBook :public Book, public Product
{
protected:
	string _genre;

public:
	AdultBook() :Book(), Product() {}
	AdultBook(float price, long serial, string name, int year, int pages, string genre) :Product(price, serial), Book(name, year, pages) { _genre = genre; } ////
	AdultBook(const AdultBook& other) :Product(other), Book(other) { _genre= other._genre; }
	virtual ~AdultBook() {}

	virtual void print();





};
