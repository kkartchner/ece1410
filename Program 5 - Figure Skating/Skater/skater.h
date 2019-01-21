#pragma once
#include "Skater.h"
#include <string>

using namespace std;
class Skater
{
public:
	Skater(string c, float s);
	string getCountry();
	float getScore();
	Skater *getNext();
	void setNext(Skater *p);
	~Skater();
private:
	string country;
	float score;
	Skater *next;
};

