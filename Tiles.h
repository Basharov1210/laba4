#ifndef TILES_H
#define TILES_H
class Tiles {
public:
	string brand;
	int size_h;
	int size_w;
	int price;

	Tiles();
	Tiles(string brand, int size_h, int size_w, int price);
	Tiles(const Tiles& object);
	~Tiles();
	void getData();
};

#endif