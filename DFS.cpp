#ifndef DFS_CPP
#define DFS_CPP

#include "DFS.h"

template<typename T>
void DFS<T>::search(Graph<T> g) {
	cout << "DFS: " << endl;
	stack<Node<T>> Stack;
	int nodes[7]; 
	for (int i = 0; i < 7; i++) 
		nodes[i] = 0;
	Stack.push(g.arrayNode[0]);
	while (!Stack.empty()) {
		Node<T> node = Stack.top(); 
		Stack.pop();
		if (nodes[node.index] == 2) continue;
		nodes[node.index] = 2; 
		for (int j = g.size-1; j >= 0; j--) { 
			if (g.matrix[node.index][j] == 1 && nodes[j] != 2) { 
				Stack.push(g.arrayNode[j]); 
				nodes[j] = 1;
			}
		}
		cout << node.val << endl; 
	}

	cout << endl << endl;
}

#endif