#include"MusicAlbum.h"

AlbumMusic::AlbumMusic(float price, long serial, string name, int year, Song** songs, int sizeAlbum) :Product(price, serial) 
{
	_albumName = name;
	_year = year;
	_sizeOfAlbum =sizeAlbum;
	_songs = new Song * [_sizeOfAlbum];
	for (int i = 0; i < _sizeOfAlbum; i++)
	{
			_songs[i] = songs[i];
	}
	float newPrice = _sizeOfAlbum*5;
	if (newPrice >= 100)
		_price = 100;
	else if (newPrice <= 10)
		_price = 10;
	else
		_price = newPrice;

}

AlbumMusic::AlbumMusic(const AlbumMusic& other) :Product(other) 
{
	_albumName = other._albumName;
	_year = other._year;
	_sizeOfAlbum = other._sizeOfAlbum;
	_songs = new Song * [other._sizeOfAlbum];
	for (int i = 0; i < other._sizeOfAlbum; i++)
	{
		_songs[i] = other._songs[i];
	}





}



AlbumMusic::~AlbumMusic()
{
		for (int i = 0; i < _sizeOfAlbum; i++)
			delete _songs[i];
		delete[]_songs;
}

void AlbumMusic::print()
{
	cout << "The name of Album: " << _albumName << " year of album: " << _year << endl;
	for (int i = 0; i < _sizeOfAlbum; i++)
		cout << "The name of " << i + 1 << " song: " << this->_songs[i]->getName() << endl;

}
