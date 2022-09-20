#include<iostream>
using namespace std;

class Product
{
protected:
	float _price;
	long _serialNum;

public:
	Product() {}
	Product(float price, long serial) { _price = price; ++_serialNum; }
	Product(const Product& other) { _price = other._price; _serialNum = other._serialNum; }
	virtual ~Product() {}
	
	//long GetNum(){return _serialNum;}
	virtual void print() const = 0;



};
