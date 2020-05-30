#include "fine.h" 



fine::fine()
{
	this->date_fine = Date();
	this->name_fine = "Return v neckuda";
}

fine::fine(string name_fine) :fine()
{
	if (name_fine.length() > 0) {
		this->name_fine = name_fine;
	}
}

fine::fine(string name_fine, Date date_fine):fine(name_fine)
{
	if (Date() >= date_fine) {
		this->date_fine = date_fine;
	}
}
 

void fine::setname(string name)
{
	if (name.length() > 0) {
		this->name_fine = name;
	}
}

void fine::setdate(Date date)
{
	if (Date() >= date) {
		this->date_fine = date;
	}
}
 

string fine::getname()
{
	return this->name_fine;
}

Date fine::getdate()
{
	return this->date_fine;
}
 

int fine::getid()
{
	return this->id;
}

void fine::setid(int id)
{
	this->id = id;
}


fine::~fine()
{
}

istream & operator>>(istream & out, fine & st)
{
	cout << "Enter fine: "; getline(out, st.name_fine);
	cout << "Enter date of fine: "; out >> st.date_fine;
	return out;
}

ostream & operator<<(ostream & out, fine & st)
{
	out << "Fine: " << st.name_fine << endl;
	out << "Date of fine: " << st.date_fine << endl;
	out << "Id: " << st.id << endl;
	return out;
}

ofstream & operator<<(ofstream & out, fine & st)
{
	out << st.date_fine << endl;
	out << st.id << endl;
	out << st.name_fine << endl;
	return out;
}

ifstream & operator>>(ifstream & out, fine & st)
{
	out >> st.date_fine;
	out >> st.id;
	out >> st.name_fine;
	return out;
}
