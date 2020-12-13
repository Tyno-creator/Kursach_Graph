#include "Work.h"


int main() {
	bool flag = true;
	while (flag) {
		flag = false;
		int choise;
		cout << "Choise type" << endl;
		cout << "1) int" << endl;
		cout << "2) char" << endl;
		cout << "3) float" << endl;
		cin >> choise;
		system("CLS");
		switch (choise)
		{
		case 1:
			work(1);
			break;
		case 2:
			work('a');
			break;
		case 3:
			work(1.0);
			break;
		default:
			flag = true;
			break;
		}
	}
}