#include"Product.h"
#include"Movie.h"

class SciFiMovie :public Product, public Movie
{

protected:
	int _sciLevel;


public:
	SciFiMovie(float price, long serial, string name, int year, int level);
	SciFiMovie(const SciFiMovie& other);
	virtual ~SciFiMovie() {}

	virtual void print();

};
