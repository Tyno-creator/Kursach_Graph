#ifndef WORK_CPP
#define WORK_CPP

#include "Work.h"
#include "Context.h"
#include "BFS.h"
#include "DFS.h"

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
	Context<T>* context = new Context<T>(new BFS<T>);
	context->doSearch(g);
	context->set_strategy(new DFS<T>);
	context->doSearch(g);
	system("pause");
	delete context;
	g.deleteGraph();
}

#endif