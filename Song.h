#include<string>
#include<iostream>
using namespace std;

class Song
{
protected:
	string _nameSong;
	int _sizeSong;

public:
	Song() {}
	Song(string name, int size) { _nameSong = name; _sizeSong = size; }
	Song(const Song& other) { _nameSong = other._nameSong; _sizeSong = other._sizeSong; }
	virtual ~Song() {}

	string getName() { return _nameSong; }


};
