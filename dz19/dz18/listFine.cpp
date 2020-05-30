#include "listFine.h" 



listFine::listFine(int number)
{
	if (number > 0) {
		this->number = number;
	}
	index = 0;
	this->size = 0;
}

bool listFine::operator<(const listFine* number) const &
{
	if (this->number < number->number)return 1;
	else return 0;
}

bool listFine::operator>(const listFine* number) const &
{
	if (this->number > number->number)return 1;
	else return 0;
}

bool listFine::operator<=(const listFine* number) const &
{
	if (number->number >= this->number)return 1;
	else return 0;
}

bool listFine::operator>=(const listFine* number) const &
{
	if (this->number >= number->number)return 1;
	else return 0;
}

bool listFine::operator==(const listFine* number) const &
{
	if (this->number == number->number)return 1;
	else return 0;
}

bool listFine::operator!=(const listFine* number) const &
{
	if (this->number != number->number)return 1;
	else return 0;
}

void listFine::addnewoffenses(fine * o)
{
	size++;
	index++;
	fine u = *o;
	l.push_back(u);
	l.back().setid(index);
}

void listFine::deloffenses(int id)
{
	if (l.size() > 0) {
		int i = 0;
		for (list<fine>::iterator it = l.begin();
			it != l.end(); it++) {
			if ((*it).getid() == id) {
				l.erase(it); size--; break;
			}
		}
	}
}

void listFine::show()
{
	int i = 0;
	for (fine &s : l) {
		i++;
		cout << "\tFine ¹" << i << endl;
		cout << s;
	}
}

int listFine::getnumber()
{
	return number;
}

int listFine::getsize()
{
	return size;
}


listFine::~listFine()
{
}

ofstream & operator<<(ofstream & out, listFine & st)
{
	out << st.index << endl;
	out << st.number << endl;
	out << st.l.size() << endl;
	for (int i = 0; i < st.l.size(); i++) {
		out << st.l.back();
	}
	return out;
}

ifstream & operator>>(ifstream & out, listFine & st)
{
	out >> st.index;
	out >> st.number;
	int n;
	out >> n;
	for (int i = 0; i < n; i++) {
		fine u;
		out >> u;
		st.l.push_back(u);
	}
	return out;
}
