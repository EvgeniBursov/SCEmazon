#include"Product.h"
#include"Movie.h"

class ActionMovie :public Product, public Movie
{
protected:
	int _actionLevel;

public:
	ActionMovie(float price, long serial, string name, int year,int level);
	ActionMovie(const ActionMovie& other);
	virtual ~ActionMovie(){}

	virtual void print();

};
