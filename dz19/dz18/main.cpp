#include "sys.h"


int main() {

	sys s;
	fine *fin = nullptr;
	int a, n, id;
	setlocale(LC_ALL, "rus");
	string file;

	do {
		
		cout << "1 - Add fine\n";
		cout << "2 - Delete fine\n";
		cout << "3 - Show all fines\n";
		cout << "4 - Show fine of number\n";
		cout << "5 - Save\n";
		cout << "6 - Load\n";
		cout << "0 - Exit.\n";
		cin >> a;
		system("cls");
		switch (a) {
		case 0:break;
		default:cout << "Error\n";
		case 1:
			if (fin != nullptr)delete fin;
			fin = new fine;
			cin.get();
			cin >> (*fin);
			cout << "Enter number car: "; 
			cin >> n;
			s.addnewoffer(fin, n);
			break;
		case 2:
			cout << "Enter number car and number fine: "; 
			cin >> n; cin >> id;
			s.deloffer(id, n);
			break;
		case 3:
			s.show(); 
			break;
		case 4:
			cout << "Enter number: "; 
			cin >> n;
			s.show_by_number(n); 
			break;
		case 5:
			s.save(); 
			break;
		case 6:
			s.clear();
			s.load(); 
			break;
		}
	} while (a != 0);


	std::system("pause");
	return 0;
}