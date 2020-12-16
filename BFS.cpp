#ifndef BFS_CPP
#define BFS_CPP

#include "BFS.h"

template<typename T>
void BFS<T>::search(Graph<T> g) {
	cout << "BFS: " << endl;
	queue<Node<T>> Queue;
	int nodes[7]; 
	for (int i = 0; i < 7; i++)
		nodes[i] = 0; 
	Queue.push(g.arrayNode[0]);
	while (!Queue.empty()) { 
		Node<T> node = Queue.front(); 
		Queue.pop();
		nodes[node.index] = 2; 
		for (int j = 0; j < g.size; j++) { 
			if (g.matrix[node.index][j] == 1 && nodes[j] == 0) { 
				Queue.push(g.arrayNode[j]);
				nodes[j] = 1; //
			}
		}
		cout << node.val << endl;
	}
	cout << endl << endl;
}

#endif