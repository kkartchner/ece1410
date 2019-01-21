#include "Skater.h"
#include <iostream>

Skater::Skater(string c, float s)
{
	country = c;
	score = s;
}

string Skater::getCountry() { return country; }
float Skater::getScore() { return score; }
Skater *Skater::getNext() { return next; }
void Skater::setNext(Skater *p) { next = p; }

Skater::~Skater() {
	std::cout << "Deleted " << country << endl;
}
