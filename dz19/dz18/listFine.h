#pragma once
#pragma once
#include "fine.h"


class listFine
{
	list<fine> l;
	int number;
	int size;
	int index;
public:
	listFine(int number);

	bool operator<(const listFine* number)const&;
	bool operator>(const listFine* number)const&;
	bool operator<=(const listFine* number)const&;
	bool operator>=(const listFine* number)const&;
	bool operator==(const listFine* number)const&;
	bool operator!=(const listFine* number)const&;

	void addnewoffenses(fine *o);
	void deloffenses(int id);
	void show();

	int getnumber();
	int getsize();

	friend ofstream & operator<<(ofstream & out, listFine & st);
	friend ifstream & operator>>(ifstream & out, listFine & st);

	~listFine();
};

