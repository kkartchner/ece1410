#pragma once
#include "Skater.h"
#include <iostream>

class List
{
public:
	List();
	void addSkater(string country, float score);
	void printList();
	~List();
private:
	Skater * head;
};

