#include "sys.h" 



sys::sys()
{
}

void sys::addnewoffer(fine *o, int number)
{
	listFine *p = new listFine(number);
	p->addnewoffenses(o);
	bool si = true;
	for (auto st = s.begin(); st != s.end(); st++) {
		if ((*st)->getnumber() == number) {
			(*st)->addnewoffenses(o); si = false;
			break;
		}
	}
	if (si)s.insert(p);
}

void sys::deloffer(int id, int number)
{
	for (auto st = s.begin(); st != s.end(); st++) {
		if ((*st)->getnumber() == number) {
			(*st)->deloffenses(id);
			if ((*st)->getsize() == 0) {
				s.erase(st);
			}
			break;
		}
	}
}

void sys::show()
{
	for (auto st = s.begin(); st != s.end(); st++) {
		cout << "----------------------------\n";
		cout << "Number: " << (*st)->getnumber() << endl;
		(*st)->show();
		cout << "----------------------------\n";
	}
}

void sys::show_by_number(int number)
{
	for (auto st = s.begin(); st != s.end(); st++) {
		if ((*st)->getnumber() == number) {
			(*st)->show();
			break;
		}
	}
}

void sys::save()
{
	ofstream file("fine.bin");
	if (file.is_open()) {
		file << s.size() << endl;
		for (auto st = s.begin(); st != s.end(); st++) {
			file << (*(*st));
		}
	}
	file.close();
}

void sys::load()
{
	ifstream file("fine.bin");
	if (file.is_open()) {
		int n;
		file >> n;
		for (int i = 0; i < n; i++) {
			listFine *new_list = new listFine(123);
			file >> (*new_list);
			s.insert(new_list);
		}
	}
	file.close();
}

void sys::clear()
{
	s.clear();
}


sys::~sys()
{
}
