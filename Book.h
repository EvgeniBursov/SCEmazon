#include<iostream>
#include<string>
using namespace std;

class Book
{
protected:
	string _bookName;
	int _year;
	int _pages;

public:
	Book() {}
	Book(string name, int year, int pages) { _bookName = name; _year = year; _pages = pages; }
	Book(const Book& other) { _bookName = other._bookName; _year = other._year; _pages = other._pages; }
	virtual ~Book() {}

	virtual void print() const = 0;



};
