#include"Product.h"
#include"Movie.h"

class ThrillerMovie :public Product, public Movie
{
protected:
	int _thrillerLevel;

public:
	ThrillerMovie(float price, long serial, string name, int year, int level);
	ThrillerMovie(const ActionMovie& other);
	virtual ~ThrillerMovie() {}

	virtual void print();

}; 

