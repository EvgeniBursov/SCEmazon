#include"Product.h"
#include<string>
#include"Song.h"


class AlbumMusic:public Product
{
protected:
	string _albumName;
	int _year;
	Song** _songs;
	int _sizeOfAlbum;

public:
	AlbumMusic() :Product() { _songs = NULL; _sizeOfAlbum = 0; }
	AlbumMusic(float price, long serial, string name, int year, Song** songs, int sizeAlbum) :Product(price, serial) {}
	AlbumMusic(const AlbumMusic& other) :Product(other) {}
	virtual ~AlbumMusic();

	virtual void print();


};
