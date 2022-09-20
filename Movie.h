#include<iostream>
#include<string>
using namespace std;


class Movie
{
protected:
	string _nameMovie;
	int _year;

public:
	Movie() {};
	Movie(string name, int year) { _nameMovie = name; _year = year; }
	Movie(const Movie& other) { _nameMovie = other._nameMovie; _year = other._year; }
	virtual ~Movie() {}

};
