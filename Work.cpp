#ifndef WORK_CPP
#define WORK_CPP

#include "Work.h"
#include "Context.h"

template <typename T>
void work(T) {
	int size;
	while(true){
		cout << "Enter size: ";
		cin >> size;
		if (size >= 1) {
			break;
		}
		cout << "Wrong size!" << endl;
		cin.clear();
		while (cin.get() != '\n');
	}
	Graph<T> g(size);
	g.enterNodes();
	system("pause");
	delete context;
	g.deleteGraph();
}

#endif