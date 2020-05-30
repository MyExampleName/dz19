#pragma once
#include "lib.h" 
#include "Date.h"

class fine 
{
	string name_fine;
	Date date_fine; 
	int id;
public:
	fine();
	fine(string name_fine);
	fine(string name_fine, Date date_fine);
	 

	void setname(string name);
	string getname();
	void setdate(Date date);
	Date getdate();
	
	int getid();
	void setid(int id);

	friend istream & operator>>(istream & out, fine & st);
	friend ostream & operator<<(ostream & out, fine & st);
	friend ofstream & operator<<(ofstream & out, fine & st);
	friend ifstream & operator>>(ifstream & out, fine & st);

	~fine();
};

