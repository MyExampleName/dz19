#pragma once
#include "listFine.h" 
class sys 
{
	set<listFine*> s;
public:
	sys();

	void addnewoffer(fine *o, int number);
	void deloffer(int id, int number);
	void show();
	void show_by_number(int number);
	void save();
	void load();
	void clear();

	~sys();
};


